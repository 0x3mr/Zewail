from flask import Flask, jsonify, request

app = Flask(__name__)

courses = [
    {'id': 1, 'courseID': 'CSAI-201', 'name': 'Data Structures & Algorithms', 'credits': 3},
    {'id': 2, 'courseID': 'CSAI-202', 'name': 'Introduction to Database Systems', 'credits': 3},
    {'id': 3, 'courseID': 'CSAI-203', 'name': 'Introduction to Software Engineering', 'credits': 3},
]



@app.route('/courses', methods=['GET'])
def get_courses():
    return jsonify(courses)


@app.route('/courses/<string:courseID>', methods=['GET'])
def get_course(courseID):
    for course in courses:
        if course['courseID'] == courseID:
            return jsonify(course)
    return jsonify({'message': 'Course not found'}), 404


@app.route('/courses', methods=['POST'])
def add_course():
    new_course = request.json
    missing_keys = [key for key in ["courseID", "name", "credits"] if key not in new_course]

    if missing_keys:
        return jsonify({'message': f'Missing required fields: {", ".join(missing_keys)}'}), 400

    new_course['id'] = len(courses) + 1
    courses.append(new_course)
    return jsonify(new_course), 201


@app.route('/courses/<string:courseID>', methods=['DELETE'])
def delete_course(courseID):
    for course in courses:
        if course['courseID'] == courseID:
            courses.remove(course)
            return jsonify({'message': 'Course deleted'})

    return jsonify({'message': 'Course not found'}), 404


@app.route('/courses/<string:courseID>', methods=['PUT'])
def update_course(courseID):
    updated_course = request.json
    for course in courses:
        if course['courseID'] == courseID:
            course['name'] = updated_course.get('name', course['name'])
            course['credits'] = updated_course.get('credits', course['credits'])
            return jsonify(course)
    return jsonify({'message': 'Course not found'}), 404



if __name__ == '__main__':
    app.run(debug=True)


# List all courses
#
# curl http://127.0.0.1:5000/courses

# Check for a certain course by course ID
#
# curl http://127.0.0.1:5000/courses/CSAI-202

# Add a course
#
# curl -X POST http://127.0.0.1:5000/courses -H "Content-Type: application/json" -d '{"courseID": "CSAI-204", "name": "Advanced Machine Learning", "credits": 3}'

# Delete a course
#
# curl http://127.0.0.1:5000/courses/CSAI-203 -X DELETE

# Update a course
#
# curl -X PUT http://127.0.0.1:5000/courses/CSAI-202 -H "Content-Type: application/json" -d '{"name": "Database Systems II", "credits": 4}'
