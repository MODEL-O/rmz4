@ FUN_080287d0  entry 0x080287d0  size 58
.thumb
.org 0x287d0
FUN_080287d0:
	push {lr}	@ 000287d0 00b5
.org 0x287d2
	adds r2, r0, #0	@ 000287d2 021c
.org 0x287d4
	ldr r1, [r2, #12]	@ 000287d4 d168
.org 0x287d6
	ldrb r0, [r1, #1]	@ 000287d6 4878
.org 0x287d8
	cmp r0, #0	@ 000287d8 0028
.org 0x287da
	beq.n 0x287e2	@ 000287da 02d0
.org 0x287dc
	cmp r0, #1	@ 000287dc 0128
.org 0x287de
	beq.n 0x287f2	@ 000287de 08d0
.org 0x287e0
	b.n 0x28804	@ 000287e0 10e0
.org 0x287e2
	ldr r0, [r1, #4]	@ 000287e2 4868
.org 0x287e4
	movs r3, #128	@ 000287e4 8023
.org 0x287e6
	lsls r3, r3, #8	@ 000287e6 1b02
.org 0x287e8
	adds r1, r3, #0	@ 000287e8 191c
.org 0x287ea
	movs r3, #166	@ 000287ea a623
.org 0x287ec
	lsls r3, r3, #1	@ 000287ec 5b00
.org 0x287ee
	adds r2, r2, r3	@ 000287ee d218
.org 0x287f0
	b.n 0x28800	@ 000287f0 06e0
.org 0x287f2
	movs r0, #166	@ 000287f2 a620
.org 0x287f4
	lsls r0, r0, #1	@ 000287f4 4000
.org 0x287f6
	adds r2, r2, r0	@ 000287f6 1218
.org 0x287f8
	ldrh r1, [r2, #0]	@ 000287f8 1188
.org 0x287fa
	movs r3, #128	@ 000287fa 8023
.org 0x287fc
	lsls r3, r3, #7	@ 000287fc db01
.org 0x287fe
	adds r0, r3, #0	@ 000287fe 181c
.org 0x28800
	orrs r0, r1	@ 00028800 0843
.org 0x28802
	strh r0, [r2, #0]	@ 00028802 1080
.org 0x28804
	movs r0, #0	@ 00028804 0020
.org 0x28806
	pop {r1}	@ 00028806 02bc
.org 0x28808
	bx r1	@ 00028808 0847
