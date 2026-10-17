@ FUN_08051914  entry 0x08051914  size 106
.thumb
.org 0x51914
FUN_08051914:
	push {r4, r5, lr}	@ 00051914 30b5
.org 0x51916
	adds r4, r0, #0	@ 00051916 041c
.org 0x51918
	ldrb r5, [r4, #14]	@ 00051918 a57b
.org 0x5191a
	cmp r5, #0	@ 0005191a 002d
.org 0x5191c
	bne.n 0x51936	@ 0005191c 0bd1
.org 0x5191e
	adds r0, #116	@ 0005191e 7430
.org 0x51920
	ldr r1, [pc, #92]	@ 00051920 1749
.org 0x51922
	bl 0x5784	@ 00051922 b3f72fff
.org 0x51926
	ldr r1, [pc, #92]	@ 00051926 1749
.org 0x51928
	adds r0, r4, #0	@ 00051928 201c
.org 0x5192a
	bl 0x1cf00	@ 0005192a cbf7e9fa
.org 0x5192e
	str r5, [r4, #96]	@ 0005192e 2566
.org 0x51930
	ldrb r0, [r4, #14]	@ 00051930 a07b
.org 0x51932
	adds r0, #1	@ 00051932 0130
.org 0x51934
	strb r0, [r4, #14]	@ 00051934 a073
.org 0x51936
	adds r0, r4, #0	@ 00051936 201c
.org 0x51938
	bl 0x1cff0	@ 00051938 cbf75afb
.org 0x5193c
	ldr r0, [r4, #88]	@ 0005193c a06d
.org 0x5193e
	ldr r1, [r4, #96]	@ 0005193e 216e
.org 0x51940
	adds r0, r0, r1	@ 00051940 4018
.org 0x51942
	str r0, [r4, #88]	@ 00051942 a065
.org 0x51944
	adds r1, #96	@ 00051944 6031
.org 0x51946
	str r1, [r4, #96]	@ 00051946 2166
.org 0x51948
	movs r0, #128	@ 00051948 8020
.org 0x5194a
	lsls r0, r0, #3	@ 0005194a c000
.org 0x5194c
	cmp r1, r0	@ 0005194c 8142
.org 0x5194e
	ble.n 0x51952	@ 0005194e 00dd
.org 0x51950
	str r0, [r4, #96]	@ 00051950 2066
.org 0x51952
	ldr r0, [r4, #84]	@ 00051952 606d
.org 0x51954
	ldr r1, [r4, #88]	@ 00051954 a16d
.org 0x51956
	bl 0x7c7c	@ 00051956 b6f791f9
.org 0x5195a
	lsls r0, r0, #16	@ 0005195a 0004
.org 0x5195c
	cmp r0, #0	@ 0005195c 0028
.org 0x5195e
	beq.n 0x51978	@ 0005195e 0bd0
.org 0x51960
	ldr r0, [r4, #84]	@ 00051960 606d
.org 0x51962
	ldr r1, [r4, #88]	@ 00051962 a16d
.org 0x51964
	bl 0x8534	@ 00051964 b6f7e6fd
.org 0x51968
	str r0, [r4, #88]	@ 00051968 a065
.org 0x5196a
	movs r0, #240	@ 0005196a f020
.org 0x5196c
	bl 0x2b10	@ 0005196c b1f7d0f8
.org 0x51970
	movs r1, #0	@ 00051970 0021
.org 0x51972
	movs r0, #12	@ 00051972 0c20
.org 0x51974
	strb r0, [r4, #13]	@ 00051974 6073
.org 0x51976
	strb r1, [r4, #14]	@ 00051976 a173
.org 0x51978
	pop {r4, r5}	@ 00051978 30bc
.org 0x5197a
	pop {r0}	@ 0005197a 01bc
.org 0x5197c
	bx r0	@ 0005197c 0047
