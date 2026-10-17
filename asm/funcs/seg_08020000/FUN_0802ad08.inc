@ FUN_0802ad08  entry 0x0802ad08  size 90
.thumb
.org 0x2ad08
FUN_0802ad08:
	push {r4, r5, lr}	@ 0002ad08 30b5
.org 0x2ad0a
	ldr r4, [pc, #88]	@ 0002ad0a 164c
.org 0x2ad0c
	movs r5, #0	@ 0002ad0c 0025
.org 0x2ad0e
	strb r5, [r4, #0]	@ 0002ad0e 2570
.org 0x2ad10
	movs r0, #0	@ 0002ad10 0020
.org 0x2ad12
	bl 0x2ad9c	@ 0002ad12 00f043f8
.org 0x2ad16
	strb r5, [r4, #2]	@ 0002ad16 a570
.org 0x2ad18
	movs r1, #0	@ 0002ad18 0021
.org 0x2ad1a
	adds r4, #4	@ 0002ad1a 0434
.org 0x2ad1c
	movs r2, #0	@ 0002ad1c 0022
.org 0x2ad1e
	lsls r0, r1, #2	@ 0002ad1e 8800
.org 0x2ad20
	adds r0, r0, r4	@ 0002ad20 0019
.org 0x2ad22
	str r2, [r0, #0]	@ 0002ad22 0260
.org 0x2ad24
	adds r0, r1, #1	@ 0002ad24 481c
.org 0x2ad26
	lsls r0, r0, #24	@ 0002ad26 0006
.org 0x2ad28
	lsrs r1, r0, #24	@ 0002ad28 010e
.org 0x2ad2a
	cmp r1, #11	@ 0002ad2a 0b29
.org 0x2ad2c
	bls.n 0x2ad1e	@ 0002ad2c f7d9
.org 0x2ad2e
	ldr r0, [pc, #56]	@ 0002ad2e 0e48
.org 0x2ad30
	ldr r1, [pc, #56]	@ 0002ad30 0e49
.org 0x2ad32
	ldrh r1, [r1, #18]	@ 0002ad32 498a
.org 0x2ad34
	ldrh r2, [r0, #6]	@ 0002ad34 c288
.org 0x2ad36
	lsrs r2, r2, #6	@ 0002ad36 9209
.org 0x2ad38
	subs r1, r1, r2	@ 0002ad38 891a
.org 0x2ad3a
	lsls r1, r1, #5	@ 0002ad3a 4901
.org 0x2ad3c
	movs r2, #128	@ 0002ad3c 8022
.org 0x2ad3e
	lsls r2, r2, #9	@ 0002ad3e 5202
.org 0x2ad40
	adds r1, r1, r2	@ 0002ad40 8918
.org 0x2ad42
	bl 0x1d30	@ 0002ad42 d6f7f5ff
.org 0x2ad46
	ldr r0, [pc, #40]	@ 0002ad46 0a48
.org 0x2ad48
	ldr r1, [pc, #40]	@ 0002ad48 0a49
.org 0x2ad4a
	ldrh r1, [r1, #18]	@ 0002ad4a 498a
.org 0x2ad4c
	ldrb r2, [r0, #7]	@ 0002ad4c c279
.org 0x2ad4e
	subs r1, r1, r2	@ 0002ad4e 891a
.org 0x2ad50
	lsls r1, r1, #5	@ 0002ad50 4901
.org 0x2ad52
	movs r2, #128	@ 0002ad52 8022
.org 0x2ad54
	lsls r2, r2, #2	@ 0002ad54 9200
.org 0x2ad56
	adds r1, r1, r2	@ 0002ad56 8918
.org 0x2ad58
	bl 0x2208	@ 0002ad58 d7f756fa
.org 0x2ad5c
	pop {r4, r5}	@ 0002ad5c 30bc
.org 0x2ad5e
	pop {r0}	@ 0002ad5e 01bc
.org 0x2ad60
	bx r0	@ 0002ad60 0047
