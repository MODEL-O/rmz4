// undefined FUN_0800f6c8(void)
// entry 0x800f6c8


undefined4 FUN_0800f6c8(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar2 = (ushort *)(param_1 + 0x68);
  FUN_080074c0(2,0x13,*(undefined1 *)((uint)(*puVar2 >> 3) + DAT_0800f720));
  FUN_080074c0(4,0x13,*(undefined1 *)((uint)(*puVar2 >> 3) + DAT_0800f724));
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 1;
  if ((ushort)(uVar1 + 1) == 0x100) {
    *puVar2 = 0;
  }
  return in_lr;
}


