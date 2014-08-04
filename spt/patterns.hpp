#pragma once

#include "memutils.hpp"

namespace Patterns
{
	// engine.dll patterns
	const MemUtils::ptnvec ptnsSpawnPlayer =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, '?', 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x23, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x01, 0x8B, 0x96, '?', '?', '?', '?', 0x8B, 0x40, 0x0C, 0x52, 0xFF, 0xD0, 0x8B, 0x8E, '?', '?', '?', '?', 0x51, 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x8B, 0x46, 0x0C, 0x8B, 0x56, 0x04, 0x8B, 0x52, 0x74, 0x83, 0xC0, 0x01
			},
			"xxxxx????xxxxx?xxx????x????xxxx????xxxx????xxxxxxxx????xx????xxxxxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, '?', 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x23, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x01, 0x8B, 0x96, '?', '?', '?', '?', 0x8B, 0x40, 0x0C, 0x52, 0xFF, 0xD0, 0x8B, 0x8E, '?', '?', '?', '?', 0x51, 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x8B, 0x46, 0x0C, 0x8B, 0x56, 0x04, 0x8B, 0x52, 0x74, 0x40
			},
			"xxxxxxxx????xxxxx?xxx????x????xxxx????xxxx????xxxxxxxx????xx????xxxxxxxxxxxxx"
		},

		{
			"4104",
			{
				0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, '?', 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x23, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x01, 0x8B, 0x96, '?', '?', '?', '?', 0x8B, 0x40, 0x0C, 0x52, 0xFF, 0xD0, 0x8B, 0x8E, '?', '?', '?', '?', 0x51, 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x8B, 0x46, 0x0C, 0x8B, 0x56, 0x04, 0x8B, 0x52, 0x70, 0x83, 0xC0, 0x01
			},
			"xxxxx????xxxxx?xxx????x????xxxx????xxxx????xxxxxxxx????xx????xxxxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x80, 0x3D, '?', '?', '?', '?', 0x00, 0x56, 0x8B, 0xF1, 0x74, '?', 0x6A, 0x00, 0xB9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0xEB, 0x1F, 0x8B, 0x0D, '?', '?', '?', '?', 0xFF, 0xB6, '?', '?', '?', '?', 0x8B, 0x01, 0xFF, 0x50, 0x0C, 0xFF, 0xB6, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x8B, 0x46, 0x0C, 0x8D, 0x4E, 0x04, 0x40
			},
			"xxxxxxxx????xxxxx?xxx????x????xxxx????xx????xxxxxxx????x????xxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsSV_ActivateServer =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x08, 0x57, 0x8B, 0x3D, '?', '?', '?', '?', 0x68, '?', '?', '?', '?', 0xFF, 0xD7, 0x83, 0xC4, 0x04, 0xE8, '?', '?', '?', '?', 0x8B, 0x10
			},
			"xxxxxx????x????xxxxxx????xx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x57, 0x8B, 0x3D, '?', '?', '?', '?', 0x68, '?', '?', '?', '?', 0xFF, 0xD7, 0x83, 0xC4, 0x04, 0xE8, '?', '?', '?', '?', 0x8B, 0x10
			},
			"xxxxxxxxx????x????xxxxxx????xx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x53, 0x8B, 0x1D, '?', '?', '?', '?', 0x57, 0x68, '?', '?', '?', '?', 0xFF, 0xD3, 0x83, 0xC4, 0x04, 0xE8, '?', '?', '?', '?', 0x6A, 0x0B
			},
			"xxxxxxxxx????xx????xxxxxx????xx"
		}
	};

	const MemUtils::ptnvec ptnsFinishRestore =
	{
		{
			"5135",
			{
				0x81, 0xEC, 0xA4, 0x06, 0x00, 0x00, 0x33, 0xC0, 0x55, 0x8B, 0xE9, 0x8D, 0x8C, 0x24, 0x20, 0x01, 0x00, 0x00, 0x89, 0x84, 0x24, 0x08, 0x01, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0xA4, 0x06, 0x00, 0x00, 0x33, 0xC0, 0x53, 0x8B, 0xD9, 0x8D, 0x8D, 0x74, 0xF9, 0xFF, 0xFF, 0x89, 0x85, 0x5C, 0xF9, 0xFF, 0xFF
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0xA4, 0x06, 0x00, 0x00, 0x33, 0xC0, 0x53, 0x8B, 0xD9, 0x89, 0x85, 0x5C, 0xF9, 0xFF, 0xFF, 0x8D, 0x8D, 0x74, 0xF9, 0xFF, 0xFF
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsSetPaused =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0x8B, 0x50, '?', 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8B, 0x06, 0x8B, 0x50, '?', 0x8B, 0xCE, 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8A, 0x44, 0x24, 0x1C, 0x8B, 0x16, 0x8B, 0x92, 0x80, 0x00, 0x00, 0x00
			},
			"xxxxxxxxxx?xxxxx?xxxx?xxxxxxx?xxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0x8B, 0x50, '?', 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8B, 0x06, 0x8B, 0x50, '?', 0x8B, 0xCE, 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8A, 0x45, 0x08, 0x8B, 0x16, 0x8B, 0x92, 0x80, 0x00, 0x00, 0x00
			},
			"xxxxxxxxxxxxx?xxxxx?xxxx?xxxxxxx?xxxxxxxxxxx"
		},

		{
			"4104",
			{
				0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0x8B, 0x50, '?', 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8B, 0x06, 0x8B, 0x50, '?', 0x8B, 0xCE, 0xFF, 0xD2, 0x84, 0xC0, 0x74, '?', 0x8A, 0x44, 0x24, 0x1C, 0x8B, 0x16, 0x8B, 0x52, 0x7C, 0x33, 0xC9, 0x84, 0xC0
			},
			"xxxxxxxxxx?xxxxx?xxxx?xxxxxxx?xxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x06, 0x8B, 0x40, '?', 0xFF, 0xD0, 0x84, 0xC0, 0x74, '?', 0x8B, 0x06, 0x8B, 0xCE, 0x8B, 0x40, '?', 0xFF, 0xD0, 0x84, 0xC0, 0x74, '?', 0x8A, 0x4D, 0x08, 0x33, 0xC0, 0x84, 0xC9, 0x88, 0x4D, 0xFC, 0x6A, 0x00
			},
			"xxxxxxxxxxxxx?xxxxx?xxxxxx?xxxxx?xxxxxxxxxxxx"
		}
	};

	// client.dll patterns
	const MemUtils::ptnvec ptnsDoImageSpaceMotionBlur =
	{
		{
			"5135",
			{
				0xA1, '?', '?', '?', '?', 0x81, 0xEC, 0x8C, 0x00, 0x00, 0x00, 0x83, 0x78, 0x30, 0x00, 0x0F, 0x84, 0xF3, 0x06, 0x00, 0x00, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x11, 0x8B, 0x82, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xD0
			},
			"x????xxxxxxxxxxxxxxxxxx????xxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0xA1, '?', '?', '?', '?', 0x83, 0xEC, 0x7C, 0x83, 0x78, 0x30, 0x00, 0x0F, 0x84, 0x4A, 0x08, 0x00, 0x00, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x11, 0x8B, 0x82, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xD0
			},
			"xxxx????xxxxxxxxxxxxxxx????xxxxxxxxxx"
		},

		{
			"4104",
			{
				0xA1, '?', '?', '?', '?', 0x81, 0xEC, 0x8C, 0x00, 0x00, 0x00, 0x83, 0x78, 0x30, 0x00, 0x0F, 0x84, 0xEE, 0x06, 0x00, 0x00, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x11, 0x8B, 0x42, 0x7C, 0xFF, 0xD0
			},
			"x????xxxxxxxxxxxxxxxxxx????xxxxxxx"
		},

		{
			"2257546",
			{
				0x53, 0x8B, 0xDC, 0x83, 0xEC, 0x08, 0x83, 0xE4, 0xF0, 0x83, 0xC4, 0x04, 0x55, 0x8B, 0x6B, 0x04, 0x89, 0x6C, 0x24, 0x04, 0x8B, 0xEC, 0xA1, '?', '?', '?', '?', 0x81, 0xEC, 0x98, 0x00, 0x00, 0x00, 0x83, 0x78, 0x30, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxx"
		}
	};

	//const MemUtils::ptnvec ptnsClientCheckJumpButton =
	//{
	//	{
	//		"5135",
	//		{
	//			0x83, 0xEC, 0x18, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x74, 0x0F, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x83, 0xC4, 0x18, 0xC3, 0xD9, 0xEE, 0xD8, 0x91, 0x6C, 0x10, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	},

	//	{
	//		"4104",
	//		{
	//			0x83, 0xEC, 0x18, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x08, 0x80, 0xB9, 0x3C, 0x0F, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x04, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x83, 0xC4, 0x18, 0xC3, 0xD9, 0xEE, 0xD8, 0x91, 0x30, 0x10, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	},

	//	{
	//		"5339",
	//		{
	//			0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x1C, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x24, 0x10, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0x20, 0x11, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	},

	//	{
	//		"2257546",
	//		{
	//			0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x2C, 0x10, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0x28, 0x11, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	},

	//	{
	//		"2257546-HL1",
	//		{
	//			0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x08, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0xB4, 0x0F, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x81, 0xB0, 0x10, 0x00, 0x00
	//		},
	//		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
	//	}
	//};

	const MemUtils::ptnvec ptnsHudUpdate =
	{
		{
			"5135",
			{
				0x51, 0xA1, '?', '?', '?', '?', 0xD9, 0x40, 0x10, 0x56, 0x83, 0xEC, 0x08, 0xD9, 0x54, 0x24, 0x0C, 0xDD, 0x1C, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8, 0xE8, '?', '?', '?', '?', 0x8B, 0x4C, 0x24, 0x0C, 0x51, 0xB9
			},
			"xx????xxxxxxxxxxxxxxx????xxx????xxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x51, 0xA1, '?', '?', '?', '?', 0xD9, 0x40, 0x10, 0x56, 0x83, 0xEC, 0x08, 0xD9, 0x55, 0xFC, 0xDD, 0x1C, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8, 0xE8, '?', '?', '?', '?', 0x8B, 0x4D, 0x08, 0x51, 0xB9
			},
			"xxxxx????xxxxxxxxxxxxxx????xxx????xxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x51, 0xA1, '?', '?', '?', '?', 0x56, 0x83, 0xEC, 0x08, 0xD9, 0x40, 0x10, 0xD9, 0x55, 0xFC, 0xDD, 0x1C, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8, 0xE8, '?', '?', '?', '?', 0xFF, 0x75, 0x08, 0xB9
			},
			"xxxxx????xxxxxxxxxxxxxx????xxx????xxxx"
		},

		{
			"bms",
			{
				0x55, 0x8B, 0xEC, 0x51, 0xA1, '?', '?', '?', '?', 0xF3, 0x0F, 0x10, 0x40, 0x10, 0x56, 0xF3, 0x0F, 0x11, 0x45, 0xFC, 0x83, 0xEC, 0x08, 0x0F, 0x5A, 0xC0, 0xF2, 0x0F, 0x11, 0x04, 0x24, 0xE8, '?', '?', '?', '?', 0x8B, 0xC8
			},
			"xxxxx????xxxxxxxxxxxxxxxxxxxxxxx????xx"
		}
	};

	// server.dll patterns
	const MemUtils::ptnvec ptnsServerCheckJumpButton =
	{
		{
			"5135",
			{
				0x83, 0xEC, 0x1C, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x04, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x83, 0xC4, 0x1C, 0xC3, 0xD9, 0xEE, 0xD8, 0x91, 0x70, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"4104",
			{
				0x83, 0xEC, 0x1C, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x08, 0x80, 0xB9, 0xC4, 0x09, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x04, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x83, 0xC4, 0x1C, 0xC3, 0xD9, 0xEE, 0xD8, 0x91, 0x30, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"5339",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x20, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x40, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0xAC, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x18, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x40, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x89, 0xAC, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"2257546-HL1",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x56, 0x8B, 0xF1, 0x8B, 0x4E, 0x04, 0x80, 0xB9, 0x10, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x46, 0x08, 0x83, 0x48, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xF3, 0x0F, 0x10, 0x81, 0x68, 0x0D, 0x00, 0x00
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"bms",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C, 0x56, 0x8B, 0xF1, 0x8B, 0x46, 0x04, 0x80, 0xB8, 0x10, 0x0A, 0x00, 0x00, 0x00, 0x74, 0x0E, 0x8B, 0x76, 0x08, 0x83, 0x4E, 0x28, 0x02, 0x32, 0xC0, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xE8, 0x08, 0xF9, 0xFF, 0xFF, 0x84, 0xC0, 0x75, 0xF0
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsFinishGravity =
	{
		{
			"bms",
			{
				0x8B, 0x51, 0x04, 0xF3, 0x0F, 0x10, 0x82, 0x7C, 0x0D, 0x00, 0x00, 0x0F, 0x57, 0xC9, 0x0F, 0x2E, 0xC1, 0x9F, 0xF6, 0xC4, 0x44, 0x7A, 0x51, 0xF3, 0x0F, 0x10, 0x82, 0x28, 0x02, 0x00, 0x00, 0x0F, 0x2E, 0xC1, 0x9F, 0xF6, 0xC4, 0x44
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};
}
