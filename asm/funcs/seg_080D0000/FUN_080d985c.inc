@ FUN_080d985c  entry 0x080d985c  size 48
.thumb
.org 0xd985c
FUN_080d985c:
	push {r4, lr}	@ 000d985c 10b5
.org 0xd985e
	adds r4, r0, #0	@ 000d985e 041c
.org 0xd9860
	bl 0x1cff0	@ 000d9860 43f7c6fb
.org 0xd9864
	adds r0, r4, #0	@ 000d9864 201c
.org 0xd9866
	adds r0, #115	@ 000d9866 7330
.org 0xd9868
	ldrb r0, [r0, #0]	@ 000d9868 0078
.org 0xd986a
	cmp r0, #3	@ 000d986a 0328
.org 0xd986c
	bne.n 0xd9886	@ 000d986c 0bd1
.org 0xd986e
	ldr r1, [pc, #28]	@ 000d986e 0749
.org 0xd9870
	ldrb r0, [r4, #9]	@ 000d9870 607a
.org 0xd9872
	lsls r0, r0, #2	@ 000d9872 8000
.org 0xd9874
	adds r0, r0, r1	@ 000d9874 4018
.org 0xd9876
	movs r1, #2	@ 000d9876 0221
.org 0xd9878
	str r1, [r4, #12]	@ 000d9878 e160
.org 0xd987a
	ldr r0, [r0, #0]	@ 000d987a 0068
.org 0xd987c
	ldr r0, [r0, #8]	@ 000d987c 8068
.org 0xd987e
	str r0, [r4, #20]	@ 000d987e 6061
.org 0xd9880
	adds r0, r4, #0	@ 000d9880 201c
.org 0xd9882
	bl 0xd9518	@ 000d9882 fff749fe
.org 0xd9886
	pop {r4}	@ 000d9886 10bc
.org 0xd9888
	pop {r0}	@ 000d9888 01bc
.org 0xd988a
	bx r0	@ 000d988a 0047
