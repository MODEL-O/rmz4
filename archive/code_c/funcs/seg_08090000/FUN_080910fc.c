// undefined FUN_080910fc(void)
// entry 0x80910fc


undefined4 FUN_080910fc(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08091164);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x25) = 0xf;
  if (*(char *)(iVar3 + 0xbe) == '\0') {
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x11) = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x24) = 0;
      goto LAB_0809117e;
    }
    uVar2 = 0x80;
  }
  else {
    *(undefined1 *)(param_1 + 0x11) = 2;
    uVar2 = 0xc0;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar2;
LAB_0809117e:
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x12) = 0x78;
  return in_lr;
}


