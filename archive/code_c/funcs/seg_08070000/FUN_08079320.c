// undefined FUN_08079320(void)
// entry 0x8079320


undefined4 FUN_08079320(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_080793c0,0x60);
  *(undefined4 *)(param_1 + 0x98) = DAT_080793c4;
  iVar1 = DAT_080793c8;
  iVar3 = *(int *)(DAT_080793c8 + 0x38) + 0x4300;
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x3c) + DAT_080793cc;
  *(int *)(param_1 + 0xb4) = iVar3;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080793d0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  FUN_080793e4(param_1);
  return in_lr;
}


