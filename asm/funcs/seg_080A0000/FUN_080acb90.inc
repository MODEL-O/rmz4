@ FUN_080acb90  entry 0x080acb90  size 108
.thumb
.org 0xacb90
FUN_080acb90:
	push {r4, lr}	@ 000acb90 10b5
.org 0xacb92
	adds r4, r0, #0	@ 000acb92 041c
.org 0xacb94
	ldr r0, [pc, #100]	@ 000acb94 1948
.org 0xacb96
	ldr r0, [r0, #0]	@ 000acb96 0068
.org 0xacb98
	bl 0x5500	@ 000acb98 58f7b2fc
.org 0xacb9c
	mov ip, r0	@ 000acb9c 8446
.org 0xacb9e
	cmp r0, #0	@ 000acb9e 0028
.org 0xacba0
	beq.n 0xacbf4	@ 000acba0 28d0
.org 0xacba2
	mov r1, ip	@ 000acba2 6146
.org 0xacba4
	adds r1, #37	@ 000acba4 2531
.org 0xacba6
	movs r3, #0	@ 000acba6 0023
.org 0xacba8
	movs r0, #24	@ 000acba8 1820
.org 0xacbaa
	strb r0, [r1, #0]	@ 000acbaa 0870
.org 0xacbac
	ldr r0, [pc, #80]	@ 000acbac 1448
.org 0xacbae
	movs r1, #76	@ 000acbae 4c21
.org 0xacbb0
	mov r2, ip	@ 000acbb0 6246
.org 0xacbb2
	strb r1, [r2, #9]	@ 000acbb2 5172
.org 0xacbb4
	adds r1, #228	@ 000acbb4 e431
.org 0xacbb6
	adds r0, r0, r1	@ 000acbb6 4018
.org 0xacbb8
	ldr r0, [r0, #0]	@ 000acbb8 0068
.org 0xacbba
	ldr r0, [r0, #0]	@ 000acbba 0068
.org 0xacbbc
	str r0, [r2, #20]	@ 000acbbc 5061
.org 0xacbbe
	movs r2, #0	@ 000acbbe 0022
.org 0xacbc0
	mov r0, ip	@ 000acbc0 6046
.org 0xacbc2
	strh r3, [r0, #32]	@ 000acbc2 0384
.org 0xacbc4
	adds r0, #34	@ 000acbc4 2230
.org 0xacbc6
	strb r2, [r0, #0]	@ 000acbc6 0270
.org 0xacbc8
	mov r0, ip	@ 000acbc8 6046
.org 0xacbca
	ldrb r1, [r0, #11]	@ 000acbca c17a
.org 0xacbcc
	movs r0, #16	@ 000acbcc 1020
.org 0xacbce
	orrs r0, r1	@ 000acbce 0843
.org 0xacbd0
	mov r1, ip	@ 000acbd0 6146
.org 0xacbd2
	strb r0, [r1, #11]	@ 000acbd2 c872
.org 0xacbd4
	ldrb r0, [r1, #28]	@ 000acbd4 087f
.org 0xacbd6
	strb r0, [r1, #29]	@ 000acbd6 4877
.org 0xacbd8
	str r4, [r1, #40]	@ 000acbd8 8c62
.org 0xacbda
	strb r2, [r1, #16]	@ 000acbda 0a74
.org 0xacbdc
	strb r2, [r1, #17]	@ 000acbdc 4a74
.org 0xacbde
	mov r0, ip	@ 000acbde 6046
.org 0xacbe0
	adds r0, #182	@ 000acbe0 b630
.org 0xacbe2
	strb r2, [r0, #0]	@ 000acbe2 0270
.org 0xacbe4
	adds r1, #184	@ 000acbe4 b831
.org 0xacbe6
	movs r0, #1	@ 000acbe6 0120
.org 0xacbe8
	strb r0, [r1, #0]	@ 000acbe8 0870
.org 0xacbea
	mov r0, ip	@ 000acbea 6046
.org 0xacbec
	adds r0, #185	@ 000acbec b930
.org 0xacbee
	strb r2, [r0, #0]	@ 000acbee 0270
.org 0xacbf0
	adds r0, #3	@ 000acbf0 0330
.org 0xacbf2
	strb r2, [r0, #0]	@ 000acbf2 0270
.org 0xacbf4
	mov r0, ip	@ 000acbf4 6046
.org 0xacbf6
	pop {r4}	@ 000acbf6 10bc
.org 0xacbf8
	pop {r1}	@ 000acbf8 02bc
.org 0xacbfa
	bx r1	@ 000acbfa 0847
