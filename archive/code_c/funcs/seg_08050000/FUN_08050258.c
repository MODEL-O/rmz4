// undefined FUN_08050258(void)
// entry 0x8050258


undefined4 FUN_08050258(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      FUN_0801cf00(param_1,DAT_080502c8);
      FUN_0803aabc(uVar4);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    bVar3 = *(byte *)(param_1 + 10);
    bVar1 = 0xfe;
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10) & 0xfb;
    bVar3 = 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1 & bVar3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080502cc);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


