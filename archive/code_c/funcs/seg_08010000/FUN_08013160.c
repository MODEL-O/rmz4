// undefined FUN_08013160(void)
// entry 0x8013160


undefined4 FUN_08013160(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  FUN_08007638();
  puVar3 = (uint *)FUN_08000a70(0x280);
  iVar2 = DAT_080131cc;
  if (puVar3 != (uint *)0x0) {
    *(uint **)(DAT_080131cc + 0x174) = puVar3;
    *(undefined4 *)(iVar2 + 0x178) = DAT_080131d0;
    *(undefined4 *)(iVar2 + 0x17c) = DAT_080131d4;
    iVar2 = DAT_080131d8;
    uVar1 = *(ushort *)(param_1 + 0x38);
    iVar4 = (uint)uVar1 << 5;
    iVar5 = 0x9f;
    do {
      *puVar3 = *(int *)(param_1 + 0x34) +
                ((int)((uint)*(ushort *)
                              (((uint)*(byte *)(param_1 + 0x12) + iVar4 & 0xff) * 2 + iVar2) << 0x10
                      ) >> 0x18) & 0xffffU | (uint)uVar1 << 0x10;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 0x20;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return in_lr;
}


