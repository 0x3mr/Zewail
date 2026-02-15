from flask import Flask, jsonify, request

app = Flask(__name__)

@app.route('/docker', methods=['GET'])
def docker():
    # return jsonify({'message': 'Hello Docker Lab'})
    return ("Hello Docker Lab AMR")

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=4000, debug=True)
