// undefined FUN_080c8f20(void)
// entry 0x80c8f20


void FUN_080c8f20(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar4 = *DAT_080c8f70;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0xd);
  if ((bVar1 < 0xe) || (bVar1 == 0xf)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8f74);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
    bVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    if (*(byte *)(param_1 + 0xd) < 6) {
                    /* WARNING: Could not recover jumptable at 0x080c8fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_PTR_080c8fc4 + (uint)*(byte *)(param_1 + 0xd) * 4))();
      return;
    }
    if ((*(char *)(param_1 + 0xd) != '\0') && (iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + 0x1400;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x080c9262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


