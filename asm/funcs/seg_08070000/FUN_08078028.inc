@ FUN_08078028  entry 0x08078028  size 118
.thumb
.org 0x78028
FUN_08078028:
	push {r4, lr}	@ 00078028 10b5
.org 0x7802a
	adds r4, r0, #0	@ 0007802a 041c
.org 0x7802c
	ldrb r0, [r4, #15]	@ 0007802c e07b
.org 0x7802e
	cmp r0, #0	@ 0007802e 0028
.org 0x78030
	bne.n 0x78044	@ 00078030 08d1
.org 0x78032
	adds r0, r4, #0	@ 00078032 201c
.org 0x78034
	movs r1, #0	@ 00078034 0021
.org 0x78036
	bl 0x78fdc	@ 00078036 00f0d1ff
.org 0x7803a
	movs r0, #64	@ 0007803a 4020
.org 0x7803c
	strb r0, [r4, #18]	@ 0007803c a074
.org 0x7803e
	ldrb r0, [r4, #15]	@ 0007803e e07b
.org 0x78040
	adds r0, #1	@ 00078040 0130
.org 0x78042
	strb r0, [r4, #15]	@ 00078042 e073
.org 0x78044
	adds r0, r4, #0	@ 00078044 201c
.org 0x78046
	bl 0x1cff0	@ 00078046 a4f7d3ff
.org 0x7804a
	adds r0, r4, #0	@ 0007804a 201c
.org 0x7804c
	adds r0, #116	@ 0007804c 7430
.org 0x7804e
	ldr r3, [pc, #80]	@ 0007804e 144b
.org 0x78050
	ldr r2, [pc, #80]	@ 00078050 144a
.org 0x78052
	adds r1, r4, #0	@ 00078052 211c
.org 0x78054
	adds r1, #196	@ 00078054 c431
.org 0x78056
	ldrb r1, [r1, #0]	@ 00078056 0978
.org 0x78058
	lsls r1, r1, #1	@ 00078058 4900
.org 0x7805a
	adds r1, r1, r2	@ 0007805a 8918
.org 0x7805c
	ldrh r2, [r1, #0]	@ 0007805c 0a88
.org 0x7805e
	lsls r2, r2, #2	@ 0007805e 9200
.org 0x78060
	adds r2, r2, r3	@ 00078060 d218
.org 0x78062
	adds r1, r4, #0	@ 00078062 211c
.org 0x78064
	adds r1, #113	@ 00078064 7131
.org 0x78066
	ldrb r1, [r1, #0]	@ 00078066 0978
.org 0x78068
	lsls r1, r1, #24	@ 00078068 0906
.org 0x7806a
	asrs r1, r1, #24	@ 0007806a 0916
.org 0x7806c
	ldr r2, [r2, #0]	@ 0007806c 1268
.org 0x7806e
	lsls r1, r1, #2	@ 0007806e 8900
.org 0x78070
	adds r1, r1, r2	@ 00078070 8918
.org 0x78072
	ldr r1, [r1, #0]	@ 00078072 0968
.org 0x78074
	bl 0x5784	@ 00078074 8df786fb
.org 0x78078
	adds r0, r4, #0	@ 00078078 201c
.org 0x7807a
	bl 0x78f28	@ 0007807a 00f055ff
.org 0x7807e
	ldrb r0, [r4, #18]	@ 0007807e a07c
.org 0x78080
	cmp r0, #0	@ 00078080 0028
.org 0x78082
	beq.n 0x7808e	@ 00078082 04d0
.org 0x78084
	subs r0, #1	@ 00078084 0138
.org 0x78086
	strb r0, [r4, #18]	@ 00078086 a074
.org 0x78088
	lsls r0, r0, #24	@ 00078088 0006
.org 0x7808a
	cmp r0, #0	@ 0007808a 0028
.org 0x7808c
	bne.n 0x78098	@ 0007808c 04d1
.org 0x7808e
	ldrb r0, [r4, #14]	@ 0007808e a07b
.org 0x78090
	adds r0, #1	@ 00078090 0130
.org 0x78092
	movs r1, #0	@ 00078092 0021
.org 0x78094
	strb r0, [r4, #14]	@ 00078094 a073
.org 0x78096
	strb r1, [r4, #15]	@ 00078096 e173
.org 0x78098
	pop {r4}	@ 00078098 10bc
.org 0x7809a
	pop {r0}	@ 0007809a 01bc
.org 0x7809c
	bx r0	@ 0007809c 0047
