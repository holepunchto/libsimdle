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
    'direct_dependent_settings': {
      'include_dirs': [
        './include',
      ],
    },
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
