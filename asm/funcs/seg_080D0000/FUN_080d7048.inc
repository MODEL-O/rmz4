@ FUN_080d7048  entry 0x080d7048  size 80
.thumb
.org 0xd7048
FUN_080d7048:
	push {r4, lr}	@ 000d7048 10b5
.org 0xd704a
	adds r4, r0, #0	@ 000d704a 041c
.org 0xd704c
	bl 0x1cff0	@ 000d704c 45f7d0ff
.org 0xd7050
	ldr r2, [r4, #92]	@ 000d7050 e26d
.org 0xd7052
	ldr r0, [r4, #100]	@ 000d7052 606e
.org 0xd7054
	adds r2, r2, r0	@ 000d7054 1218
.org 0xd7056
	str r2, [r4, #92]	@ 000d7056 e265
.org 0xd7058
	ldr r1, [r4, #96]	@ 000d7058 216e
.org 0xd705a
	ldr r0, [r4, #104]	@ 000d705a a06e
.org 0xd705c
	adds r1, r1, r0	@ 000d705c 0918
.org 0xd705e
	str r1, [r4, #96]	@ 000d705e 2166
.org 0xd7060
	ldr r0, [r4, #84]	@ 000d7060 606d
.org 0xd7062
	adds r0, r0, r2	@ 000d7062 8018
.org 0xd7064
	str r0, [r4, #84]	@ 000d7064 6065
.org 0xd7066
	ldr r0, [r4, #88]	@ 000d7066 a06d
.org 0xd7068
	adds r0, r0, r1	@ 000d7068 4018
.org 0xd706a
	str r0, [r4, #88]	@ 000d706a a065
.org 0xd706c
	ldrb r0, [r4, #18]	@ 000d706c a07c
.org 0xd706e
	subs r0, #1	@ 000d706e 0138
.org 0xd7070
	strb r0, [r4, #18]	@ 000d7070 a074
.org 0xd7072
	lsls r0, r0, #24	@ 000d7072 0006
.org 0xd7074
	lsrs r0, r0, #24	@ 000d7074 000e
.org 0xd7076
	cmp r0, #255	@ 000d7076 ff28
.org 0xd7078
	bne.n 0xd7092	@ 000d7078 0bd1
.org 0xd707a
	ldr r1, [pc, #28]	@ 000d707a 0749
.org 0xd707c
	ldrb r0, [r4, #9]	@ 000d707c 607a
.org 0xd707e
	lsls r0, r0, #2	@ 000d707e 8000
.org 0xd7080
	adds r0, r0, r1	@ 000d7080 4018
.org 0xd7082
	movs r1, #2	@ 000d7082 0221
.org 0xd7084
	str r1, [r4, #12]	@ 000d7084 e160
.org 0xd7086
	ldr r0, [r0, #0]	@ 000d7086 0068
.org 0xd7088
	ldr r0, [r0, #8]	@ 000d7088 8068
.org 0xd708a
	str r0, [r4, #20]	@ 000d708a 6061
.org 0xd708c
	adds r0, r4, #0	@ 000d708c 201c
.org 0xd708e
	bl 0xd6f44	@ 000d708e fff759ff
.org 0xd7092
	pop {r4}	@ 000d7092 10bc
.org 0xd7094
	pop {r0}	@ 000d7094 01bc
.org 0xd7096
	bx r0	@ 000d7096 0047
