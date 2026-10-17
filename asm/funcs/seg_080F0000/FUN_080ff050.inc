@ FUN_080ff050  entry 0x080ff050  size 96
.thumb
.org 0xff050
FUN_080ff050:
	push {r4, r5, r6, lr}	@ 000ff050 70b5
.org 0xff052
	adds r6, r0, #0	@ 000ff052 061c
.org 0xff054
	movs r0, #227	@ 000ff054 e320
.org 0xff056
	lsls r0, r0, #1	@ 000ff056 4000
.org 0xff058
	bl 0x2b10	@ 000ff058 03f75afd
.org 0xff05c
	adds r5, r6, #0	@ 000ff05c 351c
.org 0xff05e
	adds r5, #84	@ 000ff05e 5435
.org 0xff060
	ldr r4, [pc, #76]	@ 000ff060 134c
.org 0xff062
	adds r0, r5, #0	@ 000ff062 281c
.org 0xff064
	adds r1, r4, #0	@ 000ff064 211c
.org 0xff066
	movs r2, #0	@ 000ff066 0022
.org 0xff068
	movs r3, #0	@ 000ff068 0023
.org 0xff06a
	bl 0xd4c8c	@ 000ff06a d5f70ffe
.org 0xff06e
	adds r1, r4, #0	@ 000ff06e 211c
.org 0xff070
	adds r1, #28	@ 000ff070 1c31
.org 0xff072
	adds r0, r5, #0	@ 000ff072 281c
.org 0xff074
	movs r2, #0	@ 000ff074 0022
.org 0xff076
	movs r3, #0	@ 000ff076 0023
.org 0xff078
	bl 0xd4c8c	@ 000ff078 d5f708fe
.org 0xff07c
	adds r1, r4, #0	@ 000ff07c 211c
.org 0xff07e
	adds r1, #56	@ 000ff07e 3831
.org 0xff080
	adds r0, r5, #0	@ 000ff080 281c
.org 0xff082
	movs r2, #0	@ 000ff082 0022
.org 0xff084
	movs r3, #0	@ 000ff084 0023
.org 0xff086
	bl 0xd4c8c	@ 000ff086 d5f701fe
.org 0xff08a
	adds r4, #84	@ 000ff08a 5434
.org 0xff08c
	adds r0, r5, #0	@ 000ff08c 281c
.org 0xff08e
	adds r1, r4, #0	@ 000ff08e 211c
.org 0xff090
	movs r2, #0	@ 000ff090 0022
.org 0xff092
	movs r3, #0	@ 000ff092 0023
.org 0xff094
	bl 0xd4c8c	@ 000ff094 d5f7fafd
.org 0xff098
	ldr r1, [pc, #24]	@ 000ff098 0649
.org 0xff09a
	ldrb r0, [r6, #9]	@ 000ff09a 707a
.org 0xff09c
	lsls r0, r0, #2	@ 000ff09c 8000
.org 0xff09e
	adds r0, r0, r1	@ 000ff09e 4018
.org 0xff0a0
	movs r1, #4	@ 000ff0a0 0421
.org 0xff0a2
	str r1, [r6, #12]	@ 000ff0a2 f160
.org 0xff0a4
	ldr r0, [r0, #0]	@ 000ff0a4 0068
.org 0xff0a6
	ldr r0, [r0, #16]	@ 000ff0a6 0069
.org 0xff0a8
	str r0, [r6, #20]	@ 000ff0a8 7061
.org 0xff0aa
	pop {r4, r5, r6}	@ 000ff0aa 70bc
.org 0xff0ac
	pop {r0}	@ 000ff0ac 01bc
.org 0xff0ae
	bx r0	@ 000ff0ae 0047
