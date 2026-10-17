// undefined FUN_08111ca8(void)
// entry 0x8111ca8


undefined4 FUN_08111ca8(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_08111d2c;
  *(undefined1 *)((int)DAT_08111d2c + DAT_08111d30) = 0x20;
  *(undefined1 *)((int)puVar1 + DAT_08111d34) = 0x20;
  *(undefined1 *)(puVar1 + 0x200) = 0x20;
  *(undefined4 *)(puVar1 + 0x204) = 0;
  FUN_08002348();
  *DAT_08111d38 = 0;
  puVar2 = DAT_08111d3c;
  *DAT_08111d3c = 0;
  *(undefined1 *)(puVar2 + 7) = 0xff;
  *DAT_08111d40 = 0;
  *puVar1 = 0;
  FUN_0810d4a8();
  *DAT_08111d44 = (ushort)DAT_08111d48 & *DAT_08111d44 & (ushort)DAT_08111d4c | 0x100;
  FUN_08002b10(0x95);
  *(undefined1 *)(DAT_08111d50 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x244) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return in_lr;
}


