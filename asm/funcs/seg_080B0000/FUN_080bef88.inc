@ FUN_080bef88  entry 0x080bef88  size 48
.thumb
.org 0xbef88
FUN_080bef88:
	push {r4, lr}	@ 000bef88 10b5
.org 0xbef8a
	adds r4, r0, #0	@ 000bef8a 041c
.org 0xbef8c
	ldr r1, [pc, #40]	@ 000bef8c 0a49
.org 0xbef8e
	ldrb r0, [r4, #16]	@ 000bef8e 207c
.org 0xbef90
	lsls r0, r0, #2	@ 000bef90 8000
.org 0xbef92
	adds r0, r0, r1	@ 000bef92 4018
.org 0xbef94
	ldr r1, [r0, #0]	@ 000bef94 0168
.org 0xbef96
	adds r0, r4, #0	@ 000bef96 201c
.org 0xbef98
	bl 0x128f80	@ 000bef98 69f0f2ff
.org 0xbef9c
	lsls r0, r0, #24	@ 000bef9c 0006
.org 0xbef9e
	cmp r0, #0	@ 000bef9e 0028
.org 0xbefa0
	bne.n 0xbefb2	@ 000befa0 07d1
.org 0xbefa2
	ldr r0, [pc, #24]	@ 000befa2 0648
.org 0xbefa4
	ldrb r1, [r4, #16]	@ 000befa4 217c
.org 0xbefa6
	lsls r1, r1, #2	@ 000befa6 8900
.org 0xbefa8
	adds r1, r1, r0	@ 000befa8 0918
.org 0xbefaa
	ldr r1, [r1, #0]	@ 000befaa 0968
.org 0xbefac
	adds r0, r4, #0	@ 000befac 201c
.org 0xbefae
	bl 0x128f80	@ 000befae 69f0e7ff
.org 0xbefb2
	pop {r4}	@ 000befb2 10bc
.org 0xbefb4
	pop {r0}	@ 000befb4 01bc
.org 0xbefb6
	bx r0	@ 000befb6 0047
