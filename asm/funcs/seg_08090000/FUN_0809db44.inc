@ FUN_0809db44  entry 0x0809db44  size 102
.thumb
.org 0x9db44
FUN_0809db44:
	push {r4, lr}	@ 0009db44 10b5
.org 0x9db46
	adds r4, r0, #0	@ 0009db46 041c
.org 0x9db48
	adds r0, #140	@ 0009db48 8c30
.org 0x9db4a
	ldr r0, [r0, #0]	@ 0009db4a 0068
.org 0x9db4c
	movs r1, #128	@ 0009db4c 8021
.org 0x9db4e
	lsls r1, r1, #2	@ 0009db4e 8900
.org 0x9db50
	ands r0, r1	@ 0009db50 0840
.org 0x9db52
	cmp r0, #0	@ 0009db52 0028
.org 0x9db54
	beq.n 0x9db74	@ 0009db54 0ed0
.org 0x9db56
	ldr r1, [pc, #24]	@ 0009db56 0649
.org 0x9db58
	ldrb r0, [r4, #9]	@ 0009db58 607a
.org 0x9db5a
	lsls r0, r0, #2	@ 0009db5a 8000
.org 0x9db5c
	adds r0, r0, r1	@ 0009db5c 4018
.org 0x9db5e
	movs r1, #2	@ 0009db5e 0221
.org 0x9db60
	str r1, [r4, #12]	@ 0009db60 e160
.org 0x9db62
	ldr r0, [r0, #0]	@ 0009db62 0068
.org 0x9db64
	ldr r0, [r0, #8]	@ 0009db64 8068
.org 0x9db66
	str r0, [r4, #20]	@ 0009db66 6061
.org 0x9db68
	adds r0, r4, #0	@ 0009db68 201c
.org 0x9db6a
	bl 0x9dbb4	@ 0009db6a 00f023f8
.org 0x9db6e
	b.n 0x9dbac	@ 0009db6e 1de0
.org 0x9db70
	.byte 0x40,0xdb,0x85,0x08	@ 0009db70 data
.org 0x9db74
	adds r0, r4, #0	@ 0009db74 201c
.org 0x9db76
	bl 0x9df34	@ 0009db76 00f0ddf9
.org 0x9db7a
	adds r0, r4, #0	@ 0009db7a 201c
.org 0x9db7c
	bl 0x9e090	@ 0009db7c 00f088fa
.org 0x9db80
	adds r0, r4, #0	@ 0009db80 201c
.org 0x9db82
	adds r0, #192	@ 0009db82 c030
.org 0x9db84
	ldr r0, [r0, #0]	@ 0009db84 0068
.org 0x9db86
	cmp r0, #0	@ 0009db86 0028
.org 0x9db88
	bne.n 0x9dba0	@ 0009db88 0ad1
.org 0x9db8a
	ldr r0, [pc, #16]	@ 0009db8a 0448
.org 0x9db8c
	ldrb r1, [r4, #13]	@ 0009db8c 617b
.org 0x9db8e
	lsls r1, r1, #2	@ 0009db8e 8900
.org 0x9db90
	adds r1, r1, r0	@ 0009db90 0918
.org 0x9db92
	ldr r1, [r1, #0]	@ 0009db92 0968
.org 0x9db94
	adds r0, r4, #0	@ 0009db94 201c
.org 0x9db96
	bl 0x128f80	@ 0009db96 8bf0f3f9
.org 0x9db9a
	b.n 0x9dba6	@ 0009db9a 04e0
.org 0x9db9c
	.byte 0x04,0x15,0x86,0x08	@ 0009db9c data
.org 0x9dba0
	adds r0, r4, #0	@ 0009dba0 201c
.org 0x9dba2
	bl 0x9e058	@ 0009dba2 00f059fa
.org 0x9dba6
	adds r0, r4, #0	@ 0009dba6 201c
.org 0x9dba8
	bl 0x1cff0	@ 0009dba8 7ff722fa
