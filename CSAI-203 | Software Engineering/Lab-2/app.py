from flask import Flask, render_template, request, redirect, url_for

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/send', methods=['POST'])
def send():
    username = request.form.get('user')
    coursename = request.form.get('coursename')
    return redirect(url_for('index2', username=username, coursename=coursename))

@app.route('/index2')
def index2():
    username = request.args.get('username')
    coursename = request.args.get('coursename')
    return render_template('index.html', username=username, coursename=coursename)

if __name__ == '__main__':
    app.run(debug=True)
