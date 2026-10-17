@ FUN_080cfa0c  entry 0x080cfa0c  size 46
.thumb
.org 0xcfa0c
FUN_080cfa0c:
	push {r4, lr}	@ 000cfa0c 10b5
.org 0xcfa0e
	adds r4, r0, #0	@ 000cfa0e 041c
.org 0xcfa10
	adds r0, #84	@ 000cfa10 5430
.org 0xcfa12
	movs r1, #128	@ 000cfa12 8021
.org 0xcfa14
	lsls r1, r1, #1	@ 000cfa14 4900
.org 0xcfa16
	ldrb r2, [r4, #10]	@ 000cfa16 a27a
.org 0xcfa18
	lsrs r2, r2, #4	@ 000cfa18 1209
.org 0xcfa1a
	movs r3, #1	@ 000cfa1a 0123
.org 0xcfa1c
	ands r2, r3	@ 000cfa1c 1a40
.org 0xcfa1e
	bl 0xe7a4c	@ 000cfa1e 18f015f8
.org 0xcfa22
	ldr r1, [pc, #24]	@ 000cfa22 0649
.org 0xcfa24
	ldrb r0, [r4, #9]	@ 000cfa24 607a
.org 0xcfa26
	lsls r0, r0, #2	@ 000cfa26 8000
.org 0xcfa28
	adds r0, r0, r1	@ 000cfa28 4018
.org 0xcfa2a
	movs r1, #4	@ 000cfa2a 0421
.org 0xcfa2c
	str r1, [r4, #12]	@ 000cfa2c e160
.org 0xcfa2e
	ldr r0, [r0, #0]	@ 000cfa2e 0068
.org 0xcfa30
	ldr r0, [r0, #16]	@ 000cfa30 0069
.org 0xcfa32
	str r0, [r4, #20]	@ 000cfa32 6061
.org 0xcfa34
	pop {r4}	@ 000cfa34 10bc
.org 0xcfa36
	pop {r0}	@ 000cfa36 01bc
.org 0xcfa38
	bx r0	@ 000cfa38 0047
