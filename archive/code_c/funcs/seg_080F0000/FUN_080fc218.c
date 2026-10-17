// undefined FUN_080fc218(void)
// entry 0x80fc218


undefined4 FUN_080fc218(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_080fc2f4;
  iVar3 = DAT_080fc26c;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = param_1 + 0x54;
    FUN_080d4c8c(iVar2,DAT_080fc26c,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar2,iVar3 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar2,iVar3 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
  }
  else {
    iVar3 = param_1 + 0x54;
    FUN_080d4c8c(iVar3,DAT_080fc2f4,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar3,iVar2 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar3,iVar2 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fc2f8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


