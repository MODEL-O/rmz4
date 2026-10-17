@ FUN_080ac928  entry 0x080ac928  size 94
.thumb
.org 0xac928
FUN_080ac928:
	push {r4, r5, lr}	@ 000ac928 30b5
.org 0xac92a
	adds r4, r0, #0	@ 000ac92a 041c
.org 0xac92c
	ldr r5, [r4, #40]	@ 000ac92c a56a
.org 0xac92e
	ldrb r0, [r4, #15]	@ 000ac92e e07b
.org 0xac930
	cmp r0, #0	@ 000ac930 0028
.org 0xac932
	bne.n 0xac952	@ 000ac932 0ed1
.org 0xac934
	ldrb r1, [r4, #10]	@ 000ac934 a17a
.org 0xac936
	movs r0, #1	@ 000ac936 0120
.org 0xac938
	orrs r0, r1	@ 000ac938 0843
.org 0xac93a
	strb r0, [r4, #10]	@ 000ac93a a072
.org 0xac93c
	adds r1, r4, #0	@ 000ac93c 211c
.org 0xac93e
	adds r1, #184	@ 000ac93e b831
.org 0xac940
	movs r0, #1	@ 000ac940 0120
.org 0xac942
	strb r0, [r1, #0]	@ 000ac942 0870
.org 0xac944
	ldr r1, [pc, #48]	@ 000ac944 0c49
.org 0xac946
	adds r0, r4, #0	@ 000ac946 201c
.org 0xac948
	bl 0x1cf00	@ 000ac948 70f7dafa
.org 0xac94c
	ldrb r0, [r4, #15]	@ 000ac94c e07b
.org 0xac94e
	adds r0, #1	@ 000ac94e 0130
.org 0xac950
	strb r0, [r4, #15]	@ 000ac950 e073
.org 0xac952
	adds r0, r4, #0	@ 000ac952 201c
.org 0xac954
	bl 0x1cff0	@ 000ac954 70f74cfb
.org 0xac958
	ldr r0, [r5, #84]	@ 000ac958 686d
.org 0xac95a
	ldr r1, [r5, #88]	@ 000ac95a a96d
.org 0xac95c
	str r0, [r4, #84]	@ 000ac95c 6065
.org 0xac95e
	str r1, [r4, #88]	@ 000ac95e a165
.org 0xac960
	adds r0, r4, #0	@ 000ac960 201c
.org 0xac962
	bl 0xacb5c	@ 000ac962 00f0fbf8
.org 0xac966
	adds r0, r4, #0	@ 000ac966 201c
.org 0xac968
	adds r0, #115	@ 000ac968 7330
.org 0xac96a
	ldrb r0, [r0, #0]	@ 000ac96a 0078
.org 0xac96c
	cmp r0, #4	@ 000ac96c 0428
.org 0xac96e
	bne.n 0xac97c	@ 000ac96e 05d1
.org 0xac970
	adds r1, r4, #0	@ 000ac970 211c
.org 0xac972
	adds r1, #180	@ 000ac972 b431
.org 0xac974
	movs r0, #1	@ 000ac974 0120
.org 0xac976
	b.n 0xac982	@ 000ac976 04e0
.org 0xac978
	.byte 0x03,0xb0,0x00,0x00	@ 000ac978 data
.org 0xac97c
	adds r1, r4, #0	@ 000ac97c 211c
.org 0xac97e
	adds r1, #180	@ 000ac97e b431
.org 0xac980
	movs r0, #0	@ 000ac980 0020
.org 0xac982
	strb r0, [r1, #0]	@ 000ac982 0870
.org 0xac984
	pop {r4, r5}	@ 000ac984 30bc
