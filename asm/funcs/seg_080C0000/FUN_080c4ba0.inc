@ FUN_080c4ba0  entry 0x080c4ba0  size 36
.thumb
.org 0xc4ba0
FUN_080c4ba0:
	push {r4, r5, lr}	@ 000c4ba0 30b5
.org 0xc4ba2
	adds r5, r0, #0	@ 000c4ba2 051c
.org 0xc4ba4
	adds r4, r5, #0	@ 000c4ba4 2c1c
.org 0xc4ba6
	adds r4, #184	@ 000c4ba6 b834
.org 0xc4ba8
	ldrb r0, [r4, #0]	@ 000c4ba8 2078
.org 0xc4baa
	cmp r0, #0	@ 000c4baa 0028
.org 0xc4bac
	beq.n 0xc4bb8	@ 000c4bac 04d0
.org 0xc4bae
	ldr r0, [pc, #20]	@ 000c4bae 0548
.org 0xc4bb0
	bl 0x2b5c	@ 000c4bb0 3df7d4ff
.org 0xc4bb4
	movs r0, #0	@ 000c4bb4 0020
.org 0xc4bb6
	strb r0, [r4, #0]	@ 000c4bb6 2070
.org 0xc4bb8
	adds r0, r5, #0	@ 000c4bb8 281c
.org 0xc4bba
	bl 0xbd3f8	@ 000c4bba f8f71dfc
.org 0xc4bbe
	pop {r4, r5}	@ 000c4bbe 30bc
.org 0xc4bc0
	pop {r0}	@ 000c4bc0 01bc
.org 0xc4bc2
	bx r0	@ 000c4bc2 0047
