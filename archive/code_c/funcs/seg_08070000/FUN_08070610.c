// undefined FUN_08070610(void)
// entry 0x8070610


undefined4 FUN_08070610(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *DAT_080706c0;
  local_14 = DAT_080706c0[1];
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar2 = 0;
    if (*DAT_080706c4 == 0x10) {
      iVar2 = 4;
    }
    FUN_08002b10(*(undefined2 *)((int)&local_18 + iVar2));
    FUN_080736c4(param_1,0x11);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_080706cc) * 4 +
                               DAT_080706c8)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_080706d0))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


