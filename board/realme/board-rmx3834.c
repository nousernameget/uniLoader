// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2026 <babob1994> <nogioget@gmail.com>
 */

#include <board.h>
#include <util.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>

static struct video_info rmx3834_fb = {
	.format = FB_FORMAT_ARGB8888,
	.width = 720,
	.height = 1600,
	.stride = 4,
	.address = (void *)0x9e000000
};

static const struct device rmx3834_devices[] = {
	{ "simplefb", &rmx3834_fb, "fb" },
};

struct board_data board_ops = {
	.name = "realme-rmx3834",
	.ops = {
	},
	.devices = rmx3834_devices,
	.num_devices = ARRAY_SIZE(rmx3834_devices),
	.quirks = 0
};
