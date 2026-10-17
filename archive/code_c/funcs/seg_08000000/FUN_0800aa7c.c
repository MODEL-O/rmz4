// undefined FUN_0800aa7c(void)
// entry 0x800aa7c


undefined4 FUN_0800aa7c(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 in_lr;
  int local_20 [2];
  
  iVar4 = DAT_0800ab74;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar6 = (ushort *)(uVar2 * 2 + DAT_0800ab74);
    *puVar6 = (ushort)*(undefined4 *)(param_1 + 100) | (ushort)DAT_0800ab78;
    *(undefined4 *)(uVar2 * 4 + iVar4 + 8) = 0;
    *(undefined2 *)(param_1 + 0x76) = 0;
    *(undefined2 *)(param_1 + 0x74) = 0;
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    FUN_08128be0(*DAT_0800ab7c + DAT_0800ab80,(*puVar6 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0(*DAT_0800ab84 + DAT_0800ab88,(*puVar6 & 0x1f00) * 8 + DAT_0800ab8c,0x200);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar6 = (ushort *)(param_1 + 0x78);
  if (*puVar6 == 0) {
    if (*(int *)(param_1 + 0x34) <= DAT_0800ab90) {
      sVar1 = *(short *)(param_1 + 0x10);
      uVar5 = sVar1 + 1;
      *(ushort *)(param_1 + 0x10) = uVar5;
      if ((uVar5 & 0x20) != 0) {
        if (DAT_0800ab9c < *(int *)(*(int *)(DAT_0800ab94 + DAT_0800ab98) + 0x58)) {
          if ((uVar5 < 0x201) ||
             (uVar2 = *(uint *)(DAT_0800ab94 + DAT_0800abd8) * DAT_0800abdc + DAT_0800abe0,
             *(uint *)(DAT_0800ab94 + DAT_0800abd8) = uVar2, (uVar2 >> 0x10 & 3) == 0)) {
            sVar1 = *(short *)(param_1 + 0x10) + 0x20;
            goto LAB_0800abe8;
          }
        }
        else if (((ushort)(sVar1 + 1U) < 0x21) &&
                (uVar2 = *(uint *)(DAT_0800ab94 + DAT_0800aba0) * DAT_0800aba4 + DAT_0800aba8,
                *(uint *)(DAT_0800ab94 + DAT_0800aba0) = uVar2, (uVar2 >> 0x10 & 1) == 0)) {
          sVar1 = sVar1 + 0x21;
LAB_0800abe8:
          *(short *)(param_1 + 0x10) = sVar1;
          goto LAB_0800abea;
        }
        *puVar6 = 0x62;
        *(undefined2 *)(param_1 + 0x10) = 0;
      }
    }
LAB_0800abea:
    if (*puVar6 == 0) goto LAB_0800ac52;
  }
  if (*puVar6 == 0x62) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x34);
    local_20[0] = *(int *)(param_1 + 0x34) * 0x100 + DAT_0800ac28;
    local_20[1] = 0x22000;
    FUN_080da534(local_20);
  }
  *puVar6 = *puVar6 + 0x62;
  iVar4 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x7c) - iVar4;
  if (iVar3 < 0) {
    iVar3 = iVar4 - *(int *)(param_1 + 0x7c);
  }
  if (0x300 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x7c) = iVar4;
  }
  if ((*(int *)(param_1 + 0x7c) - iVar4) * 0x10 + 0x2000 < (int)(uint)*puVar6) {
    *puVar6 = 0;
  }
LAB_0800ac52:
  *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + 0x20;
  *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + 0x50;
  *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x72) + 0xa0;
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 0xf0;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 400;
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 0x280;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 0x620;
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 0x800;
  return in_lr;
}


