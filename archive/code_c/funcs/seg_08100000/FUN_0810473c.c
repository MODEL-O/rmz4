// undefined FUN_0810473c(void)
// entry 0x810473c


undefined4 FUN_0810473c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)(param_1 + 0xb4 + uVar3 * 4);
    if (*piVar1 != 0) {
      FUN_080e954c();
      *piVar1 = 0;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 4);
  uVar3 = 0;
  do {
    iVar2 = uVar3 * 4 + param_1;
    if (*(int *)(iVar2 + 0x5c) != 0) {
      FUN_080e954c();
      *(undefined4 *)(iVar2 + 0x5c) = 0;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 4);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08104798);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


