{
  'targets': [{
    'target_name': 'libsimdle',
    'type': 'static_library',
    'include_dirs': [
      './include',
    ],
    'sources': [
      './src/extern.c',
    ],
    'configurations': {
      'Debug': {
        'defines': ['DEBUG'],
      },
      'Release': {
        'defines': ['NDEBUG'],
      },
    },
  }]
}
