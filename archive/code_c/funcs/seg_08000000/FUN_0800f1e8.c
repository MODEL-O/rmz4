// undefined FUN_0800f1e8(void)
// entry 0x800f1e8


undefined4 FUN_0800f1e8(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_0800f284;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar5 = (ushort *)(uVar3 * 2 + DAT_0800f284);
    uVar4 = *(uint *)(param_1 + 100) | DAT_0800f288;
    *puVar5 = (ushort)uVar4;
    *(undefined4 *)(uVar3 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_0800f28c + DAT_0800f290,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0(*DAT_0800f294 + DAT_0800f298,(*puVar5 & 0x1f00) * 8 + DAT_0800f29c,0x200);
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    uVar2 = (undefined2)((uint)(*(int *)(param_1 + 0x34) * 0xc0) >> 8);
    *(undefined2 *)(param_1 + 0x6c) = uVar2;
    *(undefined2 *)(param_1 + 0x6e) = uVar2;
    uVar2 = FUN_08129198(*(undefined2 *)(param_1 + 0x6e),0x960);
    *(undefined2 *)(param_1 + 0x6a) = uVar2;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


