import pycodestyle
pycodestyle.StyleGuide(
    select=[
        'E101',
        'E112',
        'E113',
        'E115',
        'E116',
        'E117',
        'E501',
        'E502',
        'W505',
        'W291'
    ],
    max_line_length=99,
    max_doc_length=79
).check_files(['phonebook.py'])