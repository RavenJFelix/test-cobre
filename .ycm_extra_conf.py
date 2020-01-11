def Settings( **kwargs ):
    return{
            'flags': ['-x', 'c++', 'Wextra', 'Werror', '-I', 'include', '-I' , 'lib/cobre/include'],
            }
