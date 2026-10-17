@ FUN_0800eff8  entry 0x0800eff8  size 66
.thumb
.org 0xeff8
FUN_0800eff8:
	push {lr}	@ 0000eff8 00b5
.org 0xeffa
	movs r0, #123	@ 0000effa 7b20
.org 0xeffc
	bl 0x2624	@ 0000effc f3f712fb
.org 0xf000
	movs r0, #124	@ 0000f000 7c20
.org 0xf002
	bl 0x2624	@ 0000f002 f3f70ffb
.org 0xf006
	movs r0, #125	@ 0000f006 7d20
.org 0xf008
	bl 0x2624	@ 0000f008 f3f70cfb
.org 0xf00c
	movs r0, #126	@ 0000f00c 7e20
.org 0xf00e
	bl 0x2624	@ 0000f00e f3f709fb
.org 0xf012
	movs r0, #127	@ 0000f012 7f20
.org 0xf014
	bl 0x2624	@ 0000f014 f3f706fb
.org 0xf018
	movs r0, #128	@ 0000f018 8020
.org 0xf01a
	bl 0x2624	@ 0000f01a f3f703fb
.org 0xf01e
	movs r0, #129	@ 0000f01e 8120
.org 0xf020
	bl 0x2624	@ 0000f020 f3f700fb
.org 0xf024
	movs r0, #130	@ 0000f024 8220
.org 0xf026
	bl 0x2624	@ 0000f026 f3f7fdfa
.org 0xf02a
	movs r0, #131	@ 0000f02a 8320
.org 0xf02c
	bl 0x2624	@ 0000f02c f3f7fafa
.org 0xf030
	movs r0, #196	@ 0000f030 c420
.org 0xf032
	bl 0x2624	@ 0000f032 f3f7f7fa
.org 0xf036
	pop {r0}	@ 0000f036 01bc
.org 0xf038
	bx r0	@ 0000f038 0047
