// undefined FUN_080fab8c(void)
// entry 0x80fab8c


undefined4 FUN_080fab8c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = DAT_080fac5c;
  iVar3 = param_1 + 0x54;
  FUN_080d4c8c(iVar3,DAT_080fac5c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar3,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar3,iVar1 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar3,iVar1 + 0x54,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(iVar3,iVar1 + 0x70,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_08002b10(0xa8);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fac60);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


