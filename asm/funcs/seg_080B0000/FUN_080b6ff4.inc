@ FUN_080b6ff4  entry 0x080b6ff4  size 58
.thumb
.org 0xb6ff4
FUN_080b6ff4:
	push {r4, r5, lr}	@ 000b6ff4 30b5
.org 0xb6ff6
	adds r4, r0, #0	@ 000b6ff6 041c
.org 0xb6ff8
	ldrb r5, [r4, #17]	@ 000b6ff8 657c
.org 0xb6ffa
	ldrb r0, [r4, #15]	@ 000b6ffa e07b
.org 0xb6ffc
	cmp r0, #0	@ 000b6ffc 0028
.org 0xb6ffe
	bne.n 0xb7026	@ 000b6ffe 12d1
.org 0xb7000
	adds r0, r4, #0	@ 000b7000 201c
.org 0xb7002
	adds r0, #116	@ 000b7002 7430
.org 0xb7004
	ldr r1, [pc, #72]	@ 000b7004 1249
.org 0xb7006
	bl 0x5784	@ 000b7006 4ef7bdfb
.org 0xb700a
	ldr r1, [pc, #72]	@ 000b700a 1249
.org 0xb700c
	adds r0, r4, #0	@ 000b700c 201c
.org 0xb700e
	bl 0x1cf00	@ 000b700e 65f777ff
.org 0xb7012
	adds r2, r4, #0	@ 000b7012 221c
.org 0xb7014
	adds r2, #180	@ 000b7014 b432
.org 0xb7016
	adds r1, r5, #1	@ 000b7016 691c
.org 0xb7018
	lsls r0, r1, #2	@ 000b7018 8800
.org 0xb701a
	adds r0, r0, r1	@ 000b701a 4018
.org 0xb701c
	lsls r0, r0, #3	@ 000b701c c000
.org 0xb701e
	str r0, [r2, #0]	@ 000b701e 1060
.org 0xb7020
	ldrb r0, [r4, #15]	@ 000b7020 e07b
.org 0xb7022
	adds r0, #1	@ 000b7022 0130
.org 0xb7024
	strb r0, [r4, #15]	@ 000b7024 e073
.org 0xb7026
	adds r0, r4, #0	@ 000b7026 201c
.org 0xb7028
	bl 0x1cff0	@ 000b7028 65f7e2ff
.org 0xb702c
	adds r0, r4, #0	@ 000b702c 201c
