// undefined FUN_080728c8(void)
// entry 0x80728c8


undefined4 FUN_080728c8(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 in_lr;
  short asStack_1c [4];
  
  FUN_08129258(asStack_1c,DAT_08072970,6);
  bVar2 = false;
  bVar1 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080736c4(param_1,0x14);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x68) = (int)asStack_1c[bVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08072978) * 4 +
                               DAT_08072974)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_0807297c))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = FUN_08073850(param_1);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    FUN_08073a68(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    bVar2 = true;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (bVar2)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


