@ FUN_0805e5ac  entry 0x0805e5ac  size 124
.thumb
.org 0x5e5ac
FUN_0805e5ac:
	push {r4, r5, lr}	@ 0005e5ac 30b5
.org 0x5e5ae
	adds r5, r0, #0	@ 0005e5ae 051c
.org 0x5e5b0
	ldrb r0, [r5, #15]	@ 0005e5b0 e87b
.org 0x5e5b2
	cmp r0, #0	@ 0005e5b2 0028
.org 0x5e5b4
	bne.n 0x5e5ca	@ 0005e5b4 09d1
.org 0x5e5b6
	movs r0, #92	@ 0005e5b6 5c20
.org 0x5e5b8
	bl 0x2b10	@ 0005e5b8 a4f7aafa
.org 0x5e5bc
	adds r0, r5, #0	@ 0005e5bc 281c
.org 0x5e5be
	movs r1, #47	@ 0005e5be 2f21
.org 0x5e5c0
	bl 0x5ee6c	@ 0005e5c0 00f054fc
.org 0x5e5c4
	ldrb r0, [r5, #15]	@ 0005e5c4 e87b
.org 0x5e5c6
	adds r0, #1	@ 0005e5c6 0130
.org 0x5e5c8
	strb r0, [r5, #15]	@ 0005e5c8 e873
.org 0x5e5ca
	adds r0, r5, #0	@ 0005e5ca 281c
.org 0x5e5cc
	bl 0x1cff0	@ 0005e5cc bef710fd
.org 0x5e5d0
	adds r0, r5, #0	@ 0005e5d0 281c
.org 0x5e5d2
	adds r0, #116	@ 0005e5d2 7430
.org 0x5e5d4
	ldr r4, [pc, #80]	@ 0005e5d4 144c
.org 0x5e5d6
	ldr r3, [pc, #84]	@ 0005e5d6 154b
.org 0x5e5d8
	adds r1, r5, #0	@ 0005e5d8 291c
.org 0x5e5da
	adds r1, #184	@ 0005e5da b831
.org 0x5e5dc
	ldrb r2, [r1, #0]	@ 0005e5dc 0a78
.org 0x5e5de
	lsls r1, r2, #1	@ 0005e5de 5100
.org 0x5e5e0
	adds r1, r1, r3	@ 0005e5e0 c918
.org 0x5e5e2
	ldrh r1, [r1, #0]	@ 0005e5e2 0988
.org 0x5e5e4
	lsls r1, r1, #2	@ 0005e5e4 8900
.org 0x5e5e6
	adds r1, r1, r4	@ 0005e5e6 0919
.org 0x5e5e8
	adds r3, r5, #0	@ 0005e5e8 2b1c
.org 0x5e5ea
	adds r3, #113	@ 0005e5ea 7133
.org 0x5e5ec
	movs r4, #0	@ 0005e5ec 0024
.org 0x5e5ee
	ldrsb r4, [r3, r4]	@ 0005e5ee 1c57
.org 0x5e5f0
	ldr r1, [r1, #0]	@ 0005e5f0 0968
.org 0x5e5f2
	lsls r3, r4, #2	@ 0005e5f2 a300
.org 0x5e5f4
	adds r3, r3, r1	@ 0005e5f4 5b18
.org 0x5e5f6
	ldr r1, [pc, #56]	@ 0005e5f6 0e49
.org 0x5e5f8
	lsls r2, r2, #2	@ 0005e5f8 9200
.org 0x5e5fa
	adds r2, r2, r1	@ 0005e5fa 5218
.org 0x5e5fc
	ldr r1, [r2, #0]	@ 0005e5fc 1168
.org 0x5e5fe
	adds r1, r1, r4	@ 0005e5fe 0919
.org 0x5e600
	ldrb r1, [r1, #0]	@ 0005e600 0978
.org 0x5e602
	lsls r2, r1, #1	@ 0005e602 4a00
.org 0x5e604
	adds r2, r2, r1	@ 0005e604 5218
.org 0x5e606
	lsls r2, r2, #3	@ 0005e606 d200
.org 0x5e608
	ldr r1, [r3, #0]	@ 0005e608 1968
.org 0x5e60a
	adds r1, r1, r2	@ 0005e60a 8918
.org 0x5e60c
	bl 0x5784	@ 0005e60c a7f7baf8
.org 0x5e610
	adds r0, r5, #0	@ 0005e610 281c
.org 0x5e612
	adds r0, #115	@ 0005e612 7330
.org 0x5e614
	ldrb r0, [r0, #0]	@ 0005e614 0078
.org 0x5e616
	cmp r0, #4	@ 0005e616 0428
.org 0x5e618
	bne.n 0x5e622	@ 0005e618 03d1
.org 0x5e61a
	movs r1, #0	@ 0005e61a 0021
.org 0x5e61c
	movs r0, #1	@ 0005e61c 0120
.org 0x5e61e
	strb r0, [r5, #14]	@ 0005e61e a873
.org 0x5e620
	strb r1, [r5, #15]	@ 0005e620 e973
.org 0x5e622
	pop {r4, r5}	@ 0005e622 30bc
.org 0x5e624
	pop {r0}	@ 0005e624 01bc
.org 0x5e626
	bx r0	@ 0005e626 0047
