@ FUN_0810ffb8  entry 0x0810ffb8  size 130
.thumb
.org 0x10ffb8
FUN_0810ffb8:
	push {r4, lr}	@ 0010ffb8 10b5
.org 0x10ffba
	lsls r0, r0, #24	@ 0010ffba 0006
.org 0x10ffbc
	lsrs r4, r0, #24	@ 0010ffbc 040e
.org 0x10ffbe
	movs r0, #160	@ 0010ffbe a020
.org 0x10ffc0
	lsls r0, r0, #1	@ 0010ffc0 4000
.org 0x10ffc2
	bl 0xa70	@ 0010ffc2 f0f655fd
.org 0x10ffc6
	adds r3, r0, #0	@ 0010ffc6 031c
.org 0x10ffc8
	cmp r3, #0	@ 0010ffc8 002b
.org 0x10ffca
	beq.n 0x110034	@ 0010ffca 33d0
.org 0x10ffcc
	ldr r2, [pc, #108]	@ 0010ffcc 1b4a
.org 0x10ffce
	movs r1, #200	@ 0010ffce c821
.org 0x10ffd0
	lsls r1, r1, #1	@ 0010ffd0 4900
.org 0x10ffd2
	adds r0, r2, r1	@ 0010ffd2 5018
.org 0x10ffd4
	str r3, [r0, #0]	@ 0010ffd4 0360
.org 0x10ffd6
	movs r0, #202	@ 0010ffd6 ca20
.org 0x10ffd8
	lsls r0, r0, #1	@ 0010ffd8 4000
.org 0x10ffda
	adds r1, r2, r0	@ 0010ffda 1118
.org 0x10ffdc
	ldr r0, [pc, #96]	@ 0010ffdc 1848
.org 0x10ffde
	str r0, [r1, #0]	@ 0010ffde 0860
.org 0x10ffe0
	movs r0, #204	@ 0010ffe0 cc20
.org 0x10ffe2
	lsls r0, r0, #1	@ 0010ffe2 4000
.org 0x10ffe4
	adds r1, r2, r0	@ 0010ffe4 1118
.org 0x10ffe6
	ldr r0, [pc, #92]	@ 0010ffe6 1748
.org 0x10ffe8
	str r0, [r1, #0]	@ 0010ffe8 0860
.org 0x10ffea
	ldr r1, [pc, #92]	@ 0010ffea 1749
.org 0x10ffec
	lsls r0, r4, #26	@ 0010ffec a006
.org 0x10ffee
	movs r2, #128	@ 0010ffee 8022
.org 0x10fff0
	lsls r2, r2, #23	@ 0010fff0 d205
.org 0x10fff2
	adds r0, r0, r2	@ 0010fff2 8018
.org 0x10fff4
	lsrs r0, r0, #23	@ 0010fff4 c00d
.org 0x10fff6
	adds r0, r0, r1	@ 0010fff6 4018
.org 0x10fff8
	movs r1, #0	@ 0010fff8 0021
.org 0x10fffa
	ldrsh r0, [r0, r1]	@ 0010fffa 405e
.org 0x10fffc
	movs r2, #128	@ 0010fffc 8022
.org 0x10fffe
	lsls r2, r2, #1	@ 0010fffe 5200
.org 0x110000
	adds r0, r0, r2	@ 00110000 8018
.org 0x110002
	lsls r1, r0, #4	@ 00110002 0101
.org 0x110004
	subs r1, r1, r0	@ 00110004 091a
.org 0x110006
	asrs r1, r1, #5	@ 00110006 4911
.org 0x110008
	adds r0, r1, #0	@ 00110008 081c
.org 0x11000a
	subs r0, #240	@ 0011000a f038
.org 0x11000c
	strh r0, [r3, #0]	@ 0011000c 1880
.org 0x11000e
	movs r0, #240	@ 0011000e f020
.org 0x110010
	subs r0, r0, r1	@ 00110010 401a
.org 0x110012
	strh r0, [r3, #2]	@ 00110012 5880
.org 0x110014
	adds r1, r3, #4	@ 00110014 191d
.org 0x110016
	movs r2, #156	@ 00110016 9c22
.org 0x110018
	ldrh r0, [r3, #0]	@ 00110018 1888
.org 0x11001a
	strh r0, [r1, #0]	@ 0011001a 0880
.org 0x11001c
	adds r1, #4	@ 0011001c 0431
.org 0x11001e
	subs r2, #2	@ 0011001e 023a
.org 0x110020
	cmp r2, #0	@ 00110020 002a
.org 0x110022
	bge.n 0x110018	@ 00110022 f9da
.org 0x110024
	adds r1, r3, #6	@ 00110024 991d
.org 0x110026
	movs r2, #156	@ 00110026 9c22
.org 0x110028
	ldrh r0, [r3, #2]	@ 00110028 5888
.org 0x11002a
	strh r0, [r1, #0]	@ 0011002a 0880
.org 0x11002c
	adds r1, #4	@ 0011002c 0431
.org 0x11002e
	subs r2, #2	@ 0011002e 023a
.org 0x110030
	cmp r2, #0	@ 00110030 002a
.org 0x110032
	bge.n 0x110028	@ 00110032 f9da
.org 0x110034
	pop {r4}	@ 00110034 10bc
.org 0x110036
	pop {r0}	@ 00110036 01bc
.org 0x110038
	bx r0	@ 00110038 0047
