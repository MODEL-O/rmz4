@ FUN_0800cb48  entry 0x0800cb48  size 102
.thumb
.org 0xcb48
FUN_0800cb48:
	push {r4, r5, r6, lr}	@ 0000cb48 70b5
.org 0xcb4a
	ldr r5, [pc, #100]	@ 0000cb4a 194d
.org 0xcb4c
	ldr r1, [pc, #100]	@ 0000cb4c 1949
.org 0xcb4e
	adds r0, r5, r1	@ 0000cb4e 6818
.org 0xcb50
	ldrh r1, [r0, #0]	@ 0000cb50 0188
.org 0xcb52
	lsrs r0, r1, #8	@ 0000cb52 080a
.org 0xcb54
	cmp r0, #2	@ 0000cb54 0228
.org 0xcb56
	bne.n 0xcba8	@ 0000cb56 27d1
.org 0xcb58
	movs r0, #255	@ 0000cb58 ff20
.org 0xcb5a
	ands r0, r1	@ 0000cb5a 0840
.org 0xcb5c
	cmp r0, #3	@ 0000cb5c 0328
.org 0xcb5e
	bne.n 0xcba8	@ 0000cb5e 23d1
.org 0xcb60
	ldr r6, [pc, #84]	@ 0000cb60 154e
.org 0xcb62
	ldr r0, [pc, #88]	@ 0000cb62 1648
.org 0xcb64
	adds r5, r5, r0	@ 0000cb64 2d18
.org 0xcb66
	ldrb r0, [r5, #0]	@ 0000cb66 2878
.org 0xcb68
	movs r1, #3	@ 0000cb68 0321
.org 0xcb6a
	bl 0x129120	@ 0000cb6a 1cf1d9fa
.org 0xcb6e
	lsls r0, r0, #24	@ 0000cb6e 0006
.org 0xcb70
	lsrs r0, r0, #24	@ 0000cb70 000e
.org 0xcb72
	lsls r1, r0, #2	@ 0000cb72 8100
.org 0xcb74
	adds r1, r1, r0	@ 0000cb74 0918
.org 0xcb76
	lsls r1, r1, #2	@ 0000cb76 8900
.org 0xcb78
	ldr r4, [pc, #68]	@ 0000cb78 114c
.org 0xcb7a
	adds r1, r1, r4	@ 0000cb7a 0919
.org 0xcb7c
	ldr r0, [r6, #0]	@ 0000cb7c 3068
.org 0xcb7e
	adds r0, r0, r1	@ 0000cb7e 4018
.org 0xcb80
	movs r1, #128	@ 0000cb80 8021
.org 0xcb82
	lsls r1, r1, #7	@ 0000cb82 c901
.org 0xcb84
	bl 0x1ea4	@ 0000cb84 f5f78ef9
.org 0xcb88
	ldrb r0, [r5, #0]	@ 0000cb88 2878
.org 0xcb8a
	movs r1, #3	@ 0000cb8a 0321
.org 0xcb8c
	bl 0x129120	@ 0000cb8c 1cf1c8fa
.org 0xcb90
	lsls r0, r0, #24	@ 0000cb90 0006
.org 0xcb92
	lsrs r0, r0, #24	@ 0000cb92 000e
.org 0xcb94
	lsls r1, r0, #2	@ 0000cb94 8100
.org 0xcb96
	adds r1, r1, r0	@ 0000cb96 0918
.org 0xcb98
	lsls r1, r1, #2	@ 0000cb98 8900
.org 0xcb9a
	adds r1, r1, r4	@ 0000cb9a 0919
.org 0xcb9c
	ldr r0, [r6, #0]	@ 0000cb9c 3068
.org 0xcb9e
	adds r0, r0, r1	@ 0000cb9e 4018
.org 0xcba0
	adds r0, #12	@ 0000cba0 0c30
.org 0xcba2
	movs r1, #0	@ 0000cba2 0021
.org 0xcba4
	bl 0x2208	@ 0000cba4 f5f730fb
.org 0xcba8
	pop {r4, r5, r6}	@ 0000cba8 70bc
.org 0xcbaa
	pop {r0}	@ 0000cbaa 01bc
.org 0xcbac
	bx r0	@ 0000cbac 0047
