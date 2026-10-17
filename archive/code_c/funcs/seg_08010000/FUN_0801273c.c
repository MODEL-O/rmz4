// undefined FUN_0801273c(void)
// entry 0x801273c


undefined4 FUN_0801273c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0x9f;
  iVar1 = FUN_08000a70(0x280);
  iVar3 = DAT_080127b8;
  if (iVar1 != 0) {
    *(int *)(DAT_080127b8 + 0x174) = iVar1;
    *(undefined4 *)(iVar3 + 0x178) = DAT_080127bc;
    *(undefined4 *)(iVar3 + 0x17c) = DAT_080127c0;
    uVar2 = (*(int *)(param_1 + 0x38) + DAT_080127c4) * 0x10000;
    puVar4 = (uint *)(iVar1 + 0x27c);
    do {
      *puVar4 = uVar2;
      puVar4 = puVar4 + -1;
      iVar6 = iVar6 + -1;
    } while (0x50 < iVar6);
    iVar3 = FUN_08129120(*(undefined2 *)(param_1 + 0x10),6);
    iVar5 = *(int *)(param_1 + 0x34);
    if (-1 < iVar6) {
      puVar4 = (uint *)(iVar6 * 4 + iVar1);
      do {
        *puVar4 = iVar3 + (iVar5 >> 6) & 0xffffU | uVar2;
        puVar4 = puVar4 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
  }
  return in_lr;
}


