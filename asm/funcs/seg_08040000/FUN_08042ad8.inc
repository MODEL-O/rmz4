@ FUN_08042ad8  entry 0x08042ad8  size 58
.thumb
.org 0x42ad8
FUN_08042ad8:
	push {r4, r5, lr}	@ 00042ad8 30b5
.org 0x42ada
	adds r4, r0, #0	@ 00042ada 041c
.org 0x42adc
	ldr r5, [r4, #40]	@ 00042adc a56a
.org 0x42ade
	bl 0x1cd28	@ 00042ade daf723f9
.org 0x42ae2
	adds r0, r4, #0	@ 00042ae2 201c
.org 0x42ae4
	bl 0x1ceec	@ 00042ae4 daf702fa
.org 0x42ae8
	ldrb r1, [r4, #10]	@ 00042ae8 a17a
.org 0x42aea
	movs r0, #1	@ 00042aea 0120
.org 0x42aec
	orrs r0, r1	@ 00042aec 0843
.org 0x42aee
	movs r1, #2	@ 00042aee 0221
.org 0x42af0
	orrs r0, r1	@ 00042af0 0843
.org 0x42af2
	strb r0, [r4, #10]	@ 00042af2 a072
.org 0x42af4
	ldr r1, [pc, #28]	@ 00042af4 0749
.org 0x42af6
	adds r0, r4, #0	@ 00042af6 201c
.org 0x42af8
	bl 0x1cf00	@ 00042af8 daf702fa
.org 0x42afc
	movs r0, #115	@ 00042afc 7320
.org 0x42afe
	bl 0x2b10	@ 00042afe c0f707f8
.org 0x42b02
	adds r0, r5, #0	@ 00042b02 281c
.org 0x42b04
	adds r1, r4, #0	@ 00042b04 211c
.org 0x42b06
	bl 0x428c0	@ 00042b06 fff7dbfe
.org 0x42b0a
	str r0, [r4, #44]	@ 00042b0a e062
.org 0x42b0c
	pop {r4, r5}	@ 00042b0c 30bc
.org 0x42b0e
	pop {r0}	@ 00042b0e 01bc
.org 0x42b10
	bx r0	@ 00042b10 0047
