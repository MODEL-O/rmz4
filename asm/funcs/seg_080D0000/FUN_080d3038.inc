@ FUN_080d3038  entry 0x080d3038  size 58
.thumb
.org 0xd3038
FUN_080d3038:
	push {r4, lr}	@ 000d3038 10b5
.org 0xd303a
	adds r4, r0, #0	@ 000d303a 041c
.org 0xd303c
	bl 0x1cff0	@ 000d303c 49f7d8ff
.org 0xd3040
	ldr r0, [r4, #84]	@ 000d3040 606d
.org 0xd3042
	ldr r1, [r4, #92]	@ 000d3042 e16d
.org 0xd3044
	adds r0, r0, r1	@ 000d3044 4018
.org 0xd3046
	str r0, [r4, #84]	@ 000d3046 6065
.org 0xd3048
	ldr r0, [r4, #88]	@ 000d3048 a06d
.org 0xd304a
	ldr r1, [r4, #96]	@ 000d304a 216e
.org 0xd304c
	adds r0, r0, r1	@ 000d304c 4018
.org 0xd304e
	str r0, [r4, #88]	@ 000d304e a065
.org 0xd3050
	adds r0, r4, #0	@ 000d3050 201c
.org 0xd3052
	adds r0, #115	@ 000d3052 7330
.org 0xd3054
	ldrb r0, [r0, #0]	@ 000d3054 0078
.org 0xd3056
	cmp r0, #3	@ 000d3056 0328
.org 0xd3058
	bne.n 0xd306c	@ 000d3058 08d1
.org 0xd305a
	ldr r1, [pc, #24]	@ 000d305a 0649
.org 0xd305c
	ldrb r0, [r4, #9]	@ 000d305c 607a
.org 0xd305e
	lsls r0, r0, #2	@ 000d305e 8000
.org 0xd3060
	adds r0, r0, r1	@ 000d3060 4018
.org 0xd3062
	movs r1, #2	@ 000d3062 0221
.org 0xd3064
	str r1, [r4, #12]	@ 000d3064 e160
.org 0xd3066
	ldr r0, [r0, #0]	@ 000d3066 0068
.org 0xd3068
	ldr r0, [r0, #8]	@ 000d3068 8068
.org 0xd306a
	str r0, [r4, #20]	@ 000d306a 6061
.org 0xd306c
	pop {r4}	@ 000d306c 10bc
.org 0xd306e
	pop {r0}	@ 000d306e 01bc
.org 0xd3070
	bx r0	@ 000d3070 0047
