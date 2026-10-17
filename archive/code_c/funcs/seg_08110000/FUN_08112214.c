// undefined FUN_08112214(void)
// entry 0x8112214


undefined4 FUN_08112214(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_081122c0;
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)((int)DAT_081122c0 + DAT_081122c4) = 0x20;
    *(undefined1 *)((int)puVar1 + DAT_081122c8) = 0x20;
    *(undefined1 *)(puVar1 + 0x200) = 0x20;
    *(undefined4 *)(puVar1 + 0x204) = 0;
    FUN_08002348();
    *DAT_081122cc = 0;
    puVar2 = DAT_081122d0;
    *DAT_081122d0 = 0;
    *(undefined1 *)(puVar2 + 7) = 0xff;
    *DAT_081122d4 = 0;
    *puVar1 = 0;
    FUN_0810d4a8();
    *DAT_081122d8 = (ushort)DAT_081122dc & *DAT_081122d8 & (ushort)DAT_081122e0 | 0x100;
    FUN_080012ec(1);
    FUN_08002b5c(0x95);
    FUN_081126ac(DAT_081122e4,(uint)*(byte *)(param_1 + DAT_081122e8) * 0x100 + 7);
    FUN_080012b8(1,DAT_081122ec);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return in_lr;
  }
  if (*(char *)(DAT_081122f0 + 0x1320) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
    if (*(char *)(DAT_081122f4 + 0x38) == '\0') {
      FUN_08002b10(0x95);
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 5) = 4;
    }
  }
  return in_lr;
}


