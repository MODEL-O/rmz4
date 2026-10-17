// undefined FUN_0810a7c8(void)
// entry 0x810a7c8


undefined4 FUN_0810a7c8(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + DAT_0810a7f8);
  if (*(byte *)(param_1 + 0x11) < 3) {
    if (*(byte *)(iVar3 + 0xc0) == *(byte *)(param_1 + 0x11)) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar2 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar2 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar2;
    uVar4 = 0x3800;
    *(undefined4 *)(param_1 + 0x54) = 0x3800;
  }
  else {
    if ((uint)*(byte *)(iVar3 + 0xc1) == *(byte *)(param_1 + 0x11) - 3) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar2 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar2 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar2;
    *(undefined4 *)(param_1 + 0x54) = 0x3800;
    uVar4 = 0x6000;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if (5 < *(byte *)(param_1 + 0x11)) {
    if (*(char *)(*(int *)(param_1 + 0x28) + DAT_0810aa24 + 3) == '\0') {
      *(undefined1 *)(param_1 + 0x74) = 1;
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(PTR_PTR_0810a868 + (uint)*(byte *)(param_1 + 0x11) * 4))();
  return uVar4;
}


