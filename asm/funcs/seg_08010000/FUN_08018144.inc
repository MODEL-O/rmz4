@ FUN_08018144  entry 0x08018144  size 86
.thumb
.org 0x18144
FUN_08018144:
	push {r4, r5, r6, lr}	@ 00018144 70b5
.org 0x18146
	adds r5, r0, #0	@ 00018146 051c
.org 0x18148
	ldrb r6, [r5, #14]	@ 00018148 ae7b
.org 0x1814a
	cmp r6, #0	@ 0001814a 002e
.org 0x1814c
	bne.n 0x18194	@ 0001814c 22d1
.org 0x1814e
	ldr r0, [r5, #92]	@ 0001814e e86d
.org 0x18150
	lsls r0, r0, #16	@ 00018150 0004
.org 0x18152
	lsrs r0, r0, #20	@ 00018152 000d
.org 0x18154
	lsls r3, r0, #1	@ 00018154 4300
.org 0x18156
	ldr r4, [pc, #68]	@ 00018156 114c
.org 0x18158
	adds r3, r3, r4	@ 00018158 1b19
.org 0x1815a
	ldr r1, [r5, #100]	@ 0001815a 696e
.org 0x1815c
	movs r2, #71	@ 0001815c 4722
.org 0x1815e
	orrs r1, r2	@ 0001815e 1143
.org 0x18160
	strh r1, [r3, #0]	@ 00018160 1980
.org 0x18162
	lsls r0, r0, #2	@ 00018162 8000
.org 0x18164
	adds r4, #8	@ 00018164 0834
.org 0x18166
	adds r0, r0, r4	@ 00018166 0019
.org 0x18168
	str r6, [r0, #0]	@ 00018168 0660
.org 0x1816a
	ldr r0, [pc, #52]	@ 0001816a 0d48
.org 0x1816c
	ldr r0, [r0, #0]	@ 0001816c 0068
.org 0x1816e
	ldr r2, [pc, #52]	@ 0001816e 0d4a
.org 0x18170
	adds r0, r0, r2	@ 00018170 8018
.org 0x18172
	movs r2, #248	@ 00018172 f822
.org 0x18174
	lsls r2, r2, #5	@ 00018174 5201
.org 0x18176
	ands r1, r2	@ 00018176 1140
.org 0x18178
	lsls r1, r1, #3	@ 00018178 c900
.org 0x1817a
	movs r2, #192	@ 0001817a c022
.org 0x1817c
	lsls r2, r2, #19	@ 0001817c d204
.org 0x1817e
	adds r1, r1, r2	@ 0001817e 8918
.org 0x18180
	movs r2, #128	@ 00018180 8022
.org 0x18182
	lsls r2, r2, #2	@ 00018182 9200
.org 0x18184
	bl 0x128be0	@ 00018184 10f12cfd
.org 0x18188
	movs r0, #128	@ 00018188 8020
.org 0x1818a
	lsls r0, r0, #3	@ 0001818a c000
.org 0x1818c
	str r0, [r5, #80]	@ 0001818c 2865
.org 0x1818e
	ldrb r0, [r5, #14]	@ 0001818e a87b
.org 0x18190
	adds r0, #1	@ 00018190 0130
.org 0x18192
	strb r0, [r5, #14]	@ 00018192 a873
.org 0x18194
	pop {r4, r5, r6}	@ 00018194 70bc
.org 0x18196
	pop {r0}	@ 00018196 01bc
.org 0x18198
	bx r0	@ 00018198 0047
