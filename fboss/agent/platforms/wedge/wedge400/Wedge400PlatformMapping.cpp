/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/platforms/wedge/wedge400/Wedge400PlatformMapping.h"

namespace {
constexpr auto kJsonPlatformMappingStr = R"(
{
  "ports": {
    "1": {
        "mapping": {
          "id": 1,
          "name": "eth1/25/1",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                2,
                3,
                4
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                2
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                2
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                2,
                3,
                4
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                2,
                3,
                4
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "2": {
        "mapping": {
          "id": 2,
          "name": "eth1/25/2",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3": {
        "mapping": {
          "id": 3,
          "name": "eth1/25/3",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                4
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                4
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "4": {
        "mapping": {
          "id": 4,
          "name": "eth1/25/4",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "5": {
        "mapping": {
          "id": 5,
          "name": "eth1/26/1",
          "controllingPort": 5,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                6,
                7,
                8
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                6
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                6
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                6,
                7,
                8
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                6,
                7,
                8
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "6": {
        "mapping": {
          "id": 6,
          "name": "eth1/26/2",
          "controllingPort": 5,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "7": {
        "mapping": {
          "id": 7,
          "name": "eth1/26/3",
          "controllingPort": 5,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                8
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                8
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "8": {
        "mapping": {
          "id": 8,
          "name": "eth1/26/4",
          "controllingPort": 5,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "9": {
        "mapping": {
          "id": 9,
          "name": "eth1/27/1",
          "controllingPort": 9,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                10,
                11,
                12
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                10
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                10
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                10,
                11,
                12
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                10,
                11,
                12
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "10": {
        "mapping": {
          "id": 10,
          "name": "eth1/27/2",
          "controllingPort": 9,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "11": {
        "mapping": {
          "id": 11,
          "name": "eth1/27/3",
          "controllingPort": 9,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                12
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                12
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "12": {
        "mapping": {
          "id": 12,
          "name": "eth1/27/4",
          "controllingPort": 9,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "13": {
        "mapping": {
          "id": 13,
          "name": "eth1/28/1",
          "controllingPort": 13,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                14,
                15,
                16
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                14
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                14
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                14,
                15,
                16
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                14,
                15,
                16
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "14": {
        "mapping": {
          "id": 14,
          "name": "eth1/28/2",
          "controllingPort": 13,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "15": {
        "mapping": {
          "id": 15,
          "name": "eth1/28/3",
          "controllingPort": 13,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                16
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                16
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "16": {
        "mapping": {
          "id": 16,
          "name": "eth1/28/4",
          "controllingPort": 13,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "17": {
        "mapping": {
          "id": 17,
          "name": "eth1/5/1",
          "controllingPort": 17,
          "pins": [
            {
              "a": {
                "chip": "BC0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/5",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "18": {
        "mapping": {
          "id": 18,
          "name": "eth1/6/1",
          "controllingPort": 18,
          "pins": [
            {
              "a": {
                "chip": "BC2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -22,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -22,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -22,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -22,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/6",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "20": {
        "mapping": {
          "id": 20,
          "name": "eth1/17/1",
          "controllingPort": 20,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                21,
                22,
                23
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                21
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                21
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                21,
                22,
                23
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                21,
                22,
                23
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "21": {
        "mapping": {
          "id": 21,
          "name": "eth1/17/2",
          "controllingPort": 20,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "22": {
        "mapping": {
          "id": 22,
          "name": "eth1/17/3",
          "controllingPort": 20,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                23
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                23
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "23": {
        "mapping": {
          "id": 23,
          "name": "eth1/17/4",
          "controllingPort": 20,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "24": {
        "mapping": {
          "id": 24,
          "name": "eth1/18/1",
          "controllingPort": 24,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                25,
                26,
                27
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                25
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                25
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                25,
                26,
                27
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                25,
                26,
                27
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "25": {
        "mapping": {
          "id": 25,
          "name": "eth1/18/2",
          "controllingPort": 24,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "26": {
        "mapping": {
          "id": 26,
          "name": "eth1/18/3",
          "controllingPort": 24,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                27
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                27
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "27": {
        "mapping": {
          "id": 27,
          "name": "eth1/18/4",
          "controllingPort": 24,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "28": {
        "mapping": {
          "id": 28,
          "name": "eth1/19/1",
          "controllingPort": 28,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                29,
                30,
                31
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                29
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                29
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                29,
                30,
                31
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                29,
                30,
                31
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "29": {
        "mapping": {
          "id": 29,
          "name": "eth1/19/2",
          "controllingPort": 28,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "30": {
        "mapping": {
          "id": 30,
          "name": "eth1/19/3",
          "controllingPort": 28,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                31
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                31
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "31": {
        "mapping": {
          "id": 31,
          "name": "eth1/19/4",
          "controllingPort": 28,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "32": {
        "mapping": {
          "id": 32,
          "name": "eth1/20/1",
          "controllingPort": 32,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                33,
                34,
                35
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                33
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                33
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                33,
                34,
                35
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                33,
                34,
                35
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "33": {
        "mapping": {
          "id": 33,
          "name": "eth1/20/2",
          "controllingPort": 32,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "34": {
        "mapping": {
          "id": 34,
          "name": "eth1/20/3",
          "controllingPort": 32,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                35
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                35
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "35": {
        "mapping": {
          "id": 35,
          "name": "eth1/20/4",
          "controllingPort": 32,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "36": {
        "mapping": {
          "id": 36,
          "name": "eth1/1/1",
          "controllingPort": 36,
          "pins": [
            {
              "a": {
                "chip": "BC4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/1",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "37": {
        "mapping": {
          "id": 37,
          "name": "eth1/2/1",
          "controllingPort": 37,
          "pins": [
            {
              "a": {
                "chip": "BC6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/2",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "40": {
        "mapping": {
          "id": 40,
          "name": "eth1/21/1",
          "controllingPort": 40,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                41,
                42,
                43
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                41
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                41
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                41,
                42,
                43
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                41,
                42,
                43
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "41": {
        "mapping": {
          "id": 41,
          "name": "eth1/21/2",
          "controllingPort": 40,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "42": {
        "mapping": {
          "id": 42,
          "name": "eth1/21/3",
          "controllingPort": 40,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                43
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                43
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "43": {
        "mapping": {
          "id": 43,
          "name": "eth1/21/4",
          "controllingPort": 40,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "44": {
        "mapping": {
          "id": 44,
          "name": "eth1/22/1",
          "controllingPort": 44,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                45,
                46,
                47
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                45
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                45
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                45,
                46,
                47
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                45,
                46,
                47
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "45": {
        "mapping": {
          "id": 45,
          "name": "eth1/22/2",
          "controllingPort": 44,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "46": {
        "mapping": {
          "id": 46,
          "name": "eth1/22/3",
          "controllingPort": 44,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                47
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                47
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "47": {
        "mapping": {
          "id": 47,
          "name": "eth1/22/4",
          "controllingPort": 44,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "48": {
        "mapping": {
          "id": 48,
          "name": "eth1/23/1",
          "controllingPort": 48,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                49,
                50,
                51
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                49
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                49
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                49,
                50,
                51
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                49,
                50,
                51
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "49": {
        "mapping": {
          "id": 49,
          "name": "eth1/23/2",
          "controllingPort": 48,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "50": {
        "mapping": {
          "id": 50,
          "name": "eth1/23/3",
          "controllingPort": 48,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                51
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                51
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "51": {
        "mapping": {
          "id": 51,
          "name": "eth1/23/4",
          "controllingPort": 48,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "52": {
        "mapping": {
          "id": 52,
          "name": "eth1/24/1",
          "controllingPort": 52,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                53,
                54,
                55
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                53
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                53
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                53,
                54,
                55
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                53,
                54,
                55
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "53": {
        "mapping": {
          "id": 53,
          "name": "eth1/24/2",
          "controllingPort": 52,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "54": {
        "mapping": {
          "id": 54,
          "name": "eth1/24/3",
          "controllingPort": 52,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                55
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                55
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "55": {
        "mapping": {
          "id": 55,
          "name": "eth1/24/4",
          "controllingPort": 52,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "56": {
        "mapping": {
          "id": 56,
          "name": "eth1/3/1",
          "controllingPort": 56,
          "pins": [
            {
              "a": {
                "chip": "BC8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/3",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "57": {
        "mapping": {
          "id": 57,
          "name": "eth1/4/1",
          "controllingPort": 57,
          "pins": [
            {
              "a": {
                "chip": "BC10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/4",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "60": {
        "mapping": {
          "id": 60,
          "name": "eth1/29/1",
          "controllingPort": 60,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                61,
                62,
                63
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                61
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                61
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                61,
                62,
                63
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                61,
                62,
                63
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "61": {
        "mapping": {
          "id": 61,
          "name": "eth1/29/2",
          "controllingPort": 60,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "62": {
        "mapping": {
          "id": 62,
          "name": "eth1/29/3",
          "controllingPort": 60,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                63
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                63
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "63": {
        "mapping": {
          "id": 63,
          "name": "eth1/29/4",
          "controllingPort": 60,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "64": {
        "mapping": {
          "id": 64,
          "name": "eth1/30/1",
          "controllingPort": 64,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                65,
                66,
                67
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                65
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                65
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                65,
                66,
                67
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                65,
                66,
                67
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "65": {
        "mapping": {
          "id": 65,
          "name": "eth1/30/2",
          "controllingPort": 64,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "66": {
        "mapping": {
          "id": 66,
          "name": "eth1/30/3",
          "controllingPort": 64,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                67
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                67
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "67": {
        "mapping": {
          "id": 67,
          "name": "eth1/30/4",
          "controllingPort": 64,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "68": {
        "mapping": {
          "id": 68,
          "name": "eth1/31/1",
          "controllingPort": 68,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                69,
                70,
                71
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                69
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                69
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                69,
                70,
                71
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                69,
                70,
                71
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "69": {
        "mapping": {
          "id": 69,
          "name": "eth1/31/2",
          "controllingPort": 68,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "70": {
        "mapping": {
          "id": 70,
          "name": "eth1/31/3",
          "controllingPort": 68,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                71
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                71
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "71": {
        "mapping": {
          "id": 71,
          "name": "eth1/31/4",
          "controllingPort": 68,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "72": {
        "mapping": {
          "id": 72,
          "name": "eth1/32/1",
          "controllingPort": 72,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                73,
                74,
                75
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                73
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                73
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                73,
                74,
                75
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                73,
                74,
                75
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "73": {
        "mapping": {
          "id": 73,
          "name": "eth1/32/2",
          "controllingPort": 72,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "74": {
        "mapping": {
          "id": 74,
          "name": "eth1/32/3",
          "controllingPort": 72,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                75
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                75
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "75": {
        "mapping": {
          "id": 75,
          "name": "eth1/32/4",
          "controllingPort": 72,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "76": {
        "mapping": {
          "id": 76,
          "name": "eth1/7/1",
          "controllingPort": 76,
          "pins": [
            {
              "a": {
                "chip": "BC12",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 78,
                      "post": -10,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 78,
                      "post": -10,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 78,
                      "post": -10,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 78,
                      "post": -10,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/7",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "77": {
        "mapping": {
          "id": 77,
          "name": "eth1/8/1",
          "controllingPort": 77,
          "pins": [
            {
              "a": {
                "chip": "BC14",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 66,
                      "post": -8,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 66,
                      "post": -8,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 66,
                      "post": -8,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 66,
                      "post": -8,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/8",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "80": {
        "mapping": {
          "id": 80,
          "name": "eth1/33/1",
          "controllingPort": 80,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/33",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                81,
                82,
                83
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                81
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                81
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                81,
                82,
                83
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                81,
                82,
                83
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "81": {
        "mapping": {
          "id": 81,
          "name": "eth1/33/2",
          "controllingPort": 80,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/33",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "82": {
        "mapping": {
          "id": 82,
          "name": "eth1/33/3",
          "controllingPort": 80,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/33",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                83
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                83
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "83": {
        "mapping": {
          "id": 83,
          "name": "eth1/33/4",
          "controllingPort": 80,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/33",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/33",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "84": {
        "mapping": {
          "id": 84,
          "name": "eth1/34/1",
          "controllingPort": 84,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/34",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                85,
                86,
                87
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                85
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                85
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                85,
                86,
                87
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                85,
                86,
                87
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "85": {
        "mapping": {
          "id": 85,
          "name": "eth1/34/2",
          "controllingPort": 84,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/34",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "86": {
        "mapping": {
          "id": 86,
          "name": "eth1/34/3",
          "controllingPort": 84,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/34",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                87
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                87
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "87": {
        "mapping": {
          "id": 87,
          "name": "eth1/34/4",
          "controllingPort": 84,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/34",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/34",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "88": {
        "mapping": {
          "id": 88,
          "name": "eth1/35/1",
          "controllingPort": 88,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/35",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                89,
                90,
                91
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                89
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                89
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                89,
                90,
                91
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                89,
                90,
                91
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "89": {
        "mapping": {
          "id": 89,
          "name": "eth1/35/2",
          "controllingPort": 88,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/35",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "90": {
        "mapping": {
          "id": 90,
          "name": "eth1/35/3",
          "controllingPort": 88,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/35",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                91
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                91
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "91": {
        "mapping": {
          "id": 91,
          "name": "eth1/35/4",
          "controllingPort": 88,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/35",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/35",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "92": {
        "mapping": {
          "id": 92,
          "name": "eth1/36/1",
          "controllingPort": 92,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/36",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                93,
                94,
                95
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                93
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                93
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                93,
                94,
                95
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                93,
                94,
                95
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "93": {
        "mapping": {
          "id": 93,
          "name": "eth1/36/2",
          "controllingPort": 92,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/36",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "94": {
        "mapping": {
          "id": 94,
          "name": "eth1/36/3",
          "controllingPort": 92,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/36",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                95
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                95
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "95": {
        "mapping": {
          "id": 95,
          "name": "eth1/36/4",
          "controllingPort": 92,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/36",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/36",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "96": {
        "mapping": {
          "id": 96,
          "name": "eth1/9/1",
          "controllingPort": 96,
          "pins": [
            {
              "a": {
                "chip": "BC16",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 66,
                      "post": -8,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 66,
                      "post": -8,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 66,
                      "post": -8,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 66,
                      "post": -8,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/9",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "97": {
        "mapping": {
          "id": 97,
          "name": "eth1/10/1",
          "controllingPort": 97,
          "pins": [
            {
              "a": {
                "chip": "BC18",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 78,
                      "post": -10,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 78,
                      "post": -10,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 78,
                      "post": -10,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 78,
                      "post": -10,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/10",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "100": {
        "mapping": {
          "id": 100,
          "name": "eth1/41/1",
          "controllingPort": 100,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/41",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                101,
                102,
                103
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                101
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                101
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                101,
                102,
                103
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                101,
                102,
                103
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "101": {
        "mapping": {
          "id": 101,
          "name": "eth1/41/2",
          "controllingPort": 100,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/41",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "102": {
        "mapping": {
          "id": 102,
          "name": "eth1/41/3",
          "controllingPort": 100,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/41",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                103
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                103
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "103": {
        "mapping": {
          "id": 103,
          "name": "eth1/41/4",
          "controllingPort": 100,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/41",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/41",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "104": {
        "mapping": {
          "id": 104,
          "name": "eth1/42/1",
          "controllingPort": 104,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/42",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                105,
                106,
                107
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                105
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                105
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                105,
                106,
                107
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                105,
                106,
                107
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "105": {
        "mapping": {
          "id": 105,
          "name": "eth1/42/2",
          "controllingPort": 104,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/42",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "106": {
        "mapping": {
          "id": 106,
          "name": "eth1/42/3",
          "controllingPort": 104,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/42",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                107
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                107
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "107": {
        "mapping": {
          "id": 107,
          "name": "eth1/42/4",
          "controllingPort": 104,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/42",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/42",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "108": {
        "mapping": {
          "id": 108,
          "name": "eth1/43/1",
          "controllingPort": 108,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/43",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                109,
                110,
                111
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                109
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                109
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                109,
                110,
                111
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                109,
                110,
                111
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "109": {
        "mapping": {
          "id": 109,
          "name": "eth1/43/2",
          "controllingPort": 108,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/43",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "110": {
        "mapping": {
          "id": 110,
          "name": "eth1/43/3",
          "controllingPort": 108,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/43",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                111
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                111
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "111": {
        "mapping": {
          "id": 111,
          "name": "eth1/43/4",
          "controllingPort": 108,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/43",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/43",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "112": {
        "mapping": {
          "id": 112,
          "name": "eth1/44/1",
          "controllingPort": 112,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/44",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                113,
                114,
                115
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                113
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                113
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                113,
                114,
                115
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                113,
                114,
                115
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "113": {
        "mapping": {
          "id": 113,
          "name": "eth1/44/2",
          "controllingPort": 112,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/44",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "114": {
        "mapping": {
          "id": 114,
          "name": "eth1/44/3",
          "controllingPort": 112,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/44",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                115
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                115
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "115": {
        "mapping": {
          "id": 115,
          "name": "eth1/44/4",
          "controllingPort": 112,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/44",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/44",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "116": {
        "mapping": {
          "id": 116,
          "name": "eth1/13/1",
          "controllingPort": 116,
          "pins": [
            {
              "a": {
                "chip": "BC21",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/13",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "117": {
        "mapping": {
          "id": 117,
          "name": "eth1/14/1",
          "controllingPort": 117,
          "pins": [
            {
              "a": {
                "chip": "BC23",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 90,
                      "post": -18,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/14",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "120": {
        "mapping": {
          "id": 120,
          "name": "eth1/45/1",
          "controllingPort": 120,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/45",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                121,
                122,
                123
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                121
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                121
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                121,
                122,
                123
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                121,
                122,
                123
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "121": {
        "mapping": {
          "id": 121,
          "name": "eth1/45/2",
          "controllingPort": 120,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/45",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "122": {
        "mapping": {
          "id": 122,
          "name": "eth1/45/3",
          "controllingPort": 120,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/45",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                123
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                123
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "123": {
        "mapping": {
          "id": 123,
          "name": "eth1/45/4",
          "controllingPort": 120,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/45",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/45",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "124": {
        "mapping": {
          "id": 124,
          "name": "eth1/46/1",
          "controllingPort": 124,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/46",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                125,
                126,
                127
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                125
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                125
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                125,
                126,
                127
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                125,
                126,
                127
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "125": {
        "mapping": {
          "id": 125,
          "name": "eth1/46/2",
          "controllingPort": 124,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/46",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "126": {
        "mapping": {
          "id": 126,
          "name": "eth1/46/3",
          "controllingPort": 124,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/46",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                127
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                127
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "127": {
        "mapping": {
          "id": 127,
          "name": "eth1/46/4",
          "controllingPort": 124,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/46",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/46",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "128": {
        "mapping": {
          "id": 128,
          "name": "eth1/47/1",
          "controllingPort": 128,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/47",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                129,
                130,
                131
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                129
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                129
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                129,
                130,
                131
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                129,
                130,
                131
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "129": {
        "mapping": {
          "id": 129,
          "name": "eth1/47/2",
          "controllingPort": 128,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/47",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "130": {
        "mapping": {
          "id": 130,
          "name": "eth1/47/3",
          "controllingPort": 128,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/47",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                131
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                131
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "131": {
        "mapping": {
          "id": 131,
          "name": "eth1/47/4",
          "controllingPort": 128,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/47",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/47",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "132": {
        "mapping": {
          "id": 132,
          "name": "eth1/48/1",
          "controllingPort": 132,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/48",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                133,
                134,
                135
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                133
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                133
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                133,
                134,
                135
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                133,
                134,
                135
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "133": {
        "mapping": {
          "id": 133,
          "name": "eth1/48/2",
          "controllingPort": 132,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/48",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "134": {
        "mapping": {
          "id": 134,
          "name": "eth1/48/3",
          "controllingPort": 132,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/48",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                135
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                135
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "135": {
        "mapping": {
          "id": 135,
          "name": "eth1/48/4",
          "controllingPort": 132,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/48",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/48",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "136": {
        "mapping": {
          "id": 136,
          "name": "eth1/15/1",
          "controllingPort": 136,
          "pins": [
            {
              "a": {
                "chip": "BC25",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 88,
                      "post": -20,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 88,
                      "post": -20,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 88,
                      "post": -20,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 88,
                      "post": -20,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/15",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "137": {
        "mapping": {
          "id": 137,
          "name": "eth1/16/1",
          "controllingPort": 137,
          "pins": [
            {
              "a": {
                "chip": "BC27",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/16",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "140": {
        "mapping": {
          "id": 140,
          "name": "eth1/37/1",
          "controllingPort": 140,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/37",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                141,
                142,
                143
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                141
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                141
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                141,
                142,
                143
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                141,
                142,
                143
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "141": {
        "mapping": {
          "id": 141,
          "name": "eth1/37/2",
          "controllingPort": 140,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/37",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "142": {
        "mapping": {
          "id": 142,
          "name": "eth1/37/3",
          "controllingPort": 140,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/37",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                143
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                143
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "143": {
        "mapping": {
          "id": 143,
          "name": "eth1/37/4",
          "controllingPort": 140,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/37",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/37",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "144": {
        "mapping": {
          "id": 144,
          "name": "eth1/38/1",
          "controllingPort": 144,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/38",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                145,
                146,
                147
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                145
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                145
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                145,
                146,
                147
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                145,
                146,
                147
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "145": {
        "mapping": {
          "id": 145,
          "name": "eth1/38/2",
          "controllingPort": 144,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/38",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "146": {
        "mapping": {
          "id": 146,
          "name": "eth1/38/3",
          "controllingPort": 144,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/38",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                147
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                147
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "147": {
        "mapping": {
          "id": 147,
          "name": "eth1/38/4",
          "controllingPort": 144,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/38",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/38",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "148": {
        "mapping": {
          "id": 148,
          "name": "eth1/39/1",
          "controllingPort": 148,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/39",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                149,
                150,
                151
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                149
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                149
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                149,
                150,
                151
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                149,
                150,
                151
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "149": {
        "mapping": {
          "id": 149,
          "name": "eth1/39/2",
          "controllingPort": 148,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/39",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "150": {
        "mapping": {
          "id": 150,
          "name": "eth1/39/3",
          "controllingPort": 148,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/39",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                151
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                151
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "151": {
        "mapping": {
          "id": 151,
          "name": "eth1/39/4",
          "controllingPort": 148,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/39",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/39",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "152": {
        "mapping": {
          "id": 152,
          "name": "eth1/40/1",
          "controllingPort": 152,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/40",
                  "lane": 0
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "17": {
              "subsumedPorts": [
                153,
                154,
                155
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                153
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                153
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "22": {
              "subsumedPorts": [
                153,
                154,
                155
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "24": {
              "subsumedPorts": [
                153,
                154,
                155
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "153": {
        "mapping": {
          "id": 153,
          "name": "eth1/40/2",
          "controllingPort": 152,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/40",
                  "lane": 1
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "154": {
        "mapping": {
          "id": 154,
          "name": "eth1/40/3",
          "controllingPort": 152,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/40",
                  "lane": 2
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "19": {
              "subsumedPorts": [
                155
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "21": {
              "subsumedPorts": [
                155
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "155": {
        "mapping": {
          "id": 155,
          "name": "eth1/40/4",
          "controllingPort": 152,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/40",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "15": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/40",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "156": {
        "mapping": {
          "id": 156,
          "name": "eth1/11/1",
          "controllingPort": 156,
          "pins": [
            {
              "a": {
                "chip": "BC29",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 88,
                      "post": -20,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 88,
                      "post": -20,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 88,
                      "post": -20,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -2,
                      "pre2": 0,
                      "main": 88,
                      "post": -20,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/11",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "157": {
        "mapping": {
          "id": 157,
          "name": "eth1/12/1",
          "controllingPort": 157,
          "pins": [
            {
              "a": {
                "chip": "BC31",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 7
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -6,
                      "pre2": 0,
                      "main": 92,
                      "post": -24,
                      "post2": 0,
                      "post3": 0,
                      "amp": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "eth1/12",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    }
  },
  "supportedProfiles": {
    "11": {
        "speed": 10000,
        "iphy": {
          "numLanes": 1,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceMode": 10
        }
    },
    "14": {
        "speed": 25000,
        "iphy": {
          "numLanes": 1,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceMode": 10
        }
    },
    "15": {
        "speed": 25000,
        "iphy": {
          "numLanes": 1,
          "modulation": 1,
          "fec": 74,
          "medium": 1,
          "interfaceMode": 10
        }
    },
    "17": {
        "speed": 40000,
        "iphy": {
          "numLanes": 4,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceMode": 12
        }
    },
    "19": {
        "speed": 50000,
        "iphy": {
          "numLanes": 2,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceMode": 11
        }
    },
    "21": {
        "speed": 50000,
        "iphy": {
          "numLanes": 2,
          "modulation": 1,
          "fec": 528,
          "medium": 1,
          "interfaceMode": 11
        }
    },
    "22": {
        "speed": 100000,
        "iphy": {
          "numLanes": 4,
          "modulation": 1,
          "fec": 528,
          "medium": 1,
          "interfaceMode": 12
        }
    },
    "23": {
        "speed": 100000,
        "iphy": {
          "numLanes": 4,
          "modulation": 1,
          "fec": 528,
          "medium": 2,
          "interfaceMode": 3
        }
    },
    "24": {
        "speed": 200000,
        "iphy": {
          "numLanes": 4,
          "modulation": 2,
          "fec": 11,
          "medium": 1,
          "interfaceMode": 12
        }
    },
    "25": {
        "speed": 200000,
        "iphy": {
          "numLanes": 4,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceMode": 3
        }
    },
    "26": {
        "speed": 400000,
        "iphy": {
          "numLanes": 8,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceMode": 4
        }
    }
  },
  "chips": [
    {
      "name": "BC4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "BC6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "BC8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "BC10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "BC0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "BC2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "BC12",
      "type": 1,
      "physicalID": 12
    },
    {
      "name": "BC14",
      "type": 1,
      "physicalID": 14
    },
    {
      "name": "BC16",
      "type": 1,
      "physicalID": 16
    },
    {
      "name": "BC18",
      "type": 1,
      "physicalID": 18
    },
    {
      "name": "BC29",
      "type": 1,
      "physicalID": 29
    },
    {
      "name": "BC31",
      "type": 1,
      "physicalID": 31
    },
    {
      "name": "BC21",
      "type": 1,
      "physicalID": 21
    },
    {
      "name": "BC23",
      "type": 1,
      "physicalID": 23
    },
    {
      "name": "BC25",
      "type": 1,
      "physicalID": 25
    },
    {
      "name": "BC27",
      "type": 1,
      "physicalID": 27
    },
    {
      "name": "BC5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "BC7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "BC9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "BC11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "BC1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "BC3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "BC13",
      "type": 1,
      "physicalID": 13
    },
    {
      "name": "BC15",
      "type": 1,
      "physicalID": 15
    },
    {
      "name": "BC17",
      "type": 1,
      "physicalID": 17
    },
    {
      "name": "BC19",
      "type": 1,
      "physicalID": 19
    },
    {
      "name": "BC28",
      "type": 1,
      "physicalID": 28
    },
    {
      "name": "BC30",
      "type": 1,
      "physicalID": 30
    },
    {
      "name": "BC20",
      "type": 1,
      "physicalID": 20
    },
    {
      "name": "BC22",
      "type": 1,
      "physicalID": 22
    },
    {
      "name": "BC24",
      "type": 1,
      "physicalID": 24
    },
    {
      "name": "BC26",
      "type": 1,
      "physicalID": 26
    },
    {
      "name": "eth1/1",
      "type": 3,
      "physicalID": 0
    },
    {
      "name": "eth1/2",
      "type": 3,
      "physicalID": 1
    },
    {
      "name": "eth1/3",
      "type": 3,
      "physicalID": 2
    },
    {
      "name": "eth1/4",
      "type": 3,
      "physicalID": 3
    },
    {
      "name": "eth1/5",
      "type": 3,
      "physicalID": 4
    },
    {
      "name": "eth1/6",
      "type": 3,
      "physicalID": 5
    },
    {
      "name": "eth1/7",
      "type": 3,
      "physicalID": 6
    },
    {
      "name": "eth1/8",
      "type": 3,
      "physicalID": 7
    },
    {
      "name": "eth1/9",
      "type": 3,
      "physicalID": 8
    },
    {
      "name": "eth1/10",
      "type": 3,
      "physicalID": 9
    },
    {
      "name": "eth1/11",
      "type": 3,
      "physicalID": 10
    },
    {
      "name": "eth1/12",
      "type": 3,
      "physicalID": 11
    },
    {
      "name": "eth1/13",
      "type": 3,
      "physicalID": 12
    },
    {
      "name": "eth1/14",
      "type": 3,
      "physicalID": 13
    },
    {
      "name": "eth1/15",
      "type": 3,
      "physicalID": 14
    },
    {
      "name": "eth1/16",
      "type": 3,
      "physicalID": 15
    },
    {
      "name": "eth1/17",
      "type": 3,
      "physicalID": 16
    },
    {
      "name": "eth1/18",
      "type": 3,
      "physicalID": 17
    },
    {
      "name": "eth1/19",
      "type": 3,
      "physicalID": 18
    },
    {
      "name": "eth1/20",
      "type": 3,
      "physicalID": 19
    },
    {
      "name": "eth1/21",
      "type": 3,
      "physicalID": 20
    },
    {
      "name": "eth1/22",
      "type": 3,
      "physicalID": 21
    },
    {
      "name": "eth1/23",
      "type": 3,
      "physicalID": 22
    },
    {
      "name": "eth1/24",
      "type": 3,
      "physicalID": 23
    },
    {
      "name": "eth1/25",
      "type": 3,
      "physicalID": 24
    },
    {
      "name": "eth1/26",
      "type": 3,
      "physicalID": 25
    },
    {
      "name": "eth1/27",
      "type": 3,
      "physicalID": 26
    },
    {
      "name": "eth1/28",
      "type": 3,
      "physicalID": 27
    },
    {
      "name": "eth1/29",
      "type": 3,
      "physicalID": 28
    },
    {
      "name": "eth1/30",
      "type": 3,
      "physicalID": 29
    },
    {
      "name": "eth1/31",
      "type": 3,
      "physicalID": 30
    },
    {
      "name": "eth1/32",
      "type": 3,
      "physicalID": 31
    },
    {
      "name": "eth1/33",
      "type": 3,
      "physicalID": 32
    },
    {
      "name": "eth1/34",
      "type": 3,
      "physicalID": 33
    },
    {
      "name": "eth1/35",
      "type": 3,
      "physicalID": 34
    },
    {
      "name": "eth1/36",
      "type": 3,
      "physicalID": 35
    },
    {
      "name": "eth1/37",
      "type": 3,
      "physicalID": 36
    },
    {
      "name": "eth1/38",
      "type": 3,
      "physicalID": 37
    },
    {
      "name": "eth1/39",
      "type": 3,
      "physicalID": 38
    },
    {
      "name": "eth1/40",
      "type": 3,
      "physicalID": 39
    },
    {
      "name": "eth1/41",
      "type": 3,
      "physicalID": 40
    },
    {
      "name": "eth1/42",
      "type": 3,
      "physicalID": 41
    },
    {
      "name": "eth1/43",
      "type": 3,
      "physicalID": 42
    },
    {
      "name": "eth1/44",
      "type": 3,
      "physicalID": 43
    },
    {
      "name": "eth1/45",
      "type": 3,
      "physicalID": 44
    },
    {
      "name": "eth1/46",
      "type": 3,
      "physicalID": 45
    },
    {
      "name": "eth1/47",
      "type": 3,
      "physicalID": 46
    },
    {
      "name": "eth1/48",
      "type": 3,
      "physicalID": 47
    }
  ],
  "portConfigOverrides": [
    {
      "factor": {
        "ports": [
          20,
          21,
          22,
          23,
          24,
          25,
          26,
          27,
          28,
          29,
          30,
          31,
          32,
          33,
          34,
          35,
          40,
          41,
          42,
          43,
          44,
          45,
          46,
          47,
          48,
          49,
          50,
          51,
          52,
          53,
          54,
          55,
          1,
          2,
          3,
          4,
          5,
          6,
          7,
          8,
          9,
          10,
          11,
          12,
          13,
          14,
          15,
          16,
          60,
          61,
          62,
          63,
          64,
          65,
          66,
          67,
          68,
          69,
          70,
          71,
          72,
          73,
          74,
          75,
          80,
          81,
          82,
          83,
          84,
          85,
          86,
          87,
          88,
          89,
          90,
          91,
          92,
          93,
          94,
          95,
          140,
          141,
          142,
          143,
          144,
          145,
          146,
          147,
          148,
          149,
          150,
          151,
          152,
          153,
          154,
          155,
          100,
          101,
          102,
          103,
          104,
          105,
          106,
          107,
          108,
          109,
          110,
          111,
          112,
          113,
          114,
          115,
          120,
          121,
          122,
          123,
          124,
          125,
          126,
          127,
          128,
          129,
          130,
          131,
          132,
          133,
          134,
          135
        ],
        "profiles": [
          11,
          14,
          15
        ]
      },
      "pins": {
        "iphy": [
          {
            "id": {
              "chip": "ALL",
              "lane": 0
            },
            "tx": {
              "pre": -8,
              "pre2": 0,
              "main": 89,
              "post": 0,
              "post2": 0,
              "post3": 0,
              "amp": 0
            }
          }
        ]
      }
    },
    {
      "factor": {
        "ports": [
          20,
          21,
          22,
          23,
          24,
          25,
          26,
          27,
          28,
          29,
          30,
          31,
          32,
          33,
          34,
          35,
          40,
          41,
          42,
          43,
          44,
          45,
          46,
          47,
          48,
          49,
          50,
          51,
          52,
          53,
          54,
          55,
          1,
          2,
          3,
          4,
          5,
          6,
          7,
          8,
          9,
          10,
          11,
          12,
          13,
          14,
          15,
          16,
          60,
          61,
          62,
          63,
          64,
          65,
          66,
          67,
          68,
          69,
          70,
          71,
          72,
          73,
          74,
          75,
          80,
          81,
          82,
          83,
          84,
          85,
          86,
          87,
          88,
          89,
          90,
          91,
          92,
          93,
          94,
          95,
          140,
          141,
          142,
          143,
          144,
          145,
          146,
          147,
          148,
          149,
          150,
          151,
          152,
          153,
          154,
          155,
          100,
          101,
          102,
          103,
          104,
          105,
          106,
          107,
          108,
          109,
          110,
          111,
          112,
          113,
          114,
          115,
          120,
          121,
          122,
          123,
          124,
          125,
          126,
          127,
          128,
          129,
          130,
          131,
          132,
          133,
          134,
          135
        ],
        "profiles": [
          17,
          22
        ]
      },
      "pins": {
        "iphy": [
          {
            "id": {
              "chip": "ALL",
              "lane": 0
            },
            "tx": {
              "pre": -8,
              "pre2": 0,
              "main": 89,
              "post": 0,
              "post2": 0,
              "post3": 0,
              "amp": 0
            }
          },
          {
            "id": {
              "chip": "ALL",
              "lane": 1
            },
            "tx": {
              "pre": -8,
              "pre2": 0,
              "main": 89,
              "post": 0,
              "post2": 0,
              "post3": 0,
              "amp": 0
            }
          },
          {
            "id": {
              "chip": "ALL",
              "lane": 2
            },
            "tx": {
              "pre": -8,
              "pre2": 0,
              "main": 89,
              "post": 0,
              "post2": 0,
              "post3": 0,
              "amp": 0
            }
          },
          {
            "id": {
              "chip": "ALL",
              "lane": 3
            },
            "tx": {
              "pre": -8,
              "pre2": 0,
              "main": 89,
              "post": 0,
              "post2": 0,
              "post3": 0,
              "amp": 0
            }
          }
        ]
      }
    },
    {
      "factor": {
        "ports": [
          20,
          21,
          22,
          23,
          24,
          25,
          26,
          27,
          28,
          29,
          30,
          31,
          32,
          33,
          34,
          35,
          40,
          41,
          42,
          43,
          44,
          45,
          46,
          47,
          48,
          49,
          50,
          51,
          52,
          53,
          54,
          55,
          1,
          2,
          3,
          4,
          5,
          6,
          7,
          8,
          9,
          10,
          11,
          12,
          13,
          14,
          15,
          16,
          60,
          61,
          62,
          63,
          64,
          65,
          66,
          67,
          68,
          69,
          70,
          71,
          72,
          73,
          74,
          75,
          80,
          81,
          82,
          83,
          84,
          85,
          86,
          87,
          88,
          89,
          90,
          91,
          92,
          93,
          94,
          95,
          140,
          141,
          142,
          143,
          144,
          145,
          146,
          147,
          148,
          149,
          150,
          151,
          152,
          153,
          154,
          155,
          100,
          101,
          102,
          103,
          104,
          105,
          106,
          107,
          108,
          109,
          110,
          111,
          112,
          113,
          114,
          115,
          120,
          121,
          122,
          123,
          124,
          125,
          126,
          127,
          128,
          129,
          130,
          131,
          132,
          133,
          134,
          135
        ],
        "profiles": [
          19,
          21
        ]
      },
      "pins": {
        "iphy": [
          {
            "id": {
              "chip": "ALL",
              "lane": 0
            },
            "tx": {
              "pre": -8,
              "pre2": 0,
              "main": 89,
              "post": 0,
              "post2": 0,
              "post3": 0,
              "amp": 0
            }
          },
          {
            "id": {
              "chip": "ALL",
              "lane": 1
            },
            "tx": {
              "pre": -8,
              "pre2": 0,
              "main": 89,
              "post": 0,
              "post2": 0,
              "post3": 0,
              "amp": 0
            }
          }
        ]
      }
    }
  ]
}
)";
} // namespace

namespace facebook {
namespace fboss {
Wedge400PlatformMapping::Wedge400PlatformMapping()
    : PlatformMapping(kJsonPlatformMappingStr) {}
} // namespace fboss
} // namespace facebook
