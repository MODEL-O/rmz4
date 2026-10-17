// undefined FUN_08111bc4(void)
// entry 0x8111bc4


undefined4 FUN_08111bc4(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_08111c5c;
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)((int)DAT_08111c5c + DAT_08111c60) = 0x20;
    *(undefined1 *)((int)puVar1 + DAT_08111c64) = 0x20;
    *(undefined1 *)(puVar1 + 0x200) = 0x20;
    *(undefined4 *)(puVar1 + 0x204) = 0;
    FUN_08002348();
    *DAT_08111c68 = 0;
    puVar2 = DAT_08111c6c;
    *DAT_08111c6c = 0;
    *(undefined1 *)(puVar2 + 7) = 0xff;
    *DAT_08111c70 = 0;
    *puVar1 = 0;
    FUN_0810d4a8();
    *DAT_08111c74 = (ushort)DAT_08111c78 & *DAT_08111c74 & (ushort)DAT_08111c7c | 0x100;
    FUN_080012ec(1);
    FUN_080012b8(1,DAT_08111c80);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    return in_lr;
  }
  if (*(char *)(DAT_08111c84 + 0x1320) == '\x01') {
    FUN_0810f6f8(DAT_08111c88,1);
    FUN_080013b0(DAT_08111c8c);
  }
  return in_lr;
}


