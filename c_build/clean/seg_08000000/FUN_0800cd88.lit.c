// undefined FUN_0800cd88(void)
// entry 0x800cd88


void FUN_0800cd88(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  iVar4 = 0x02000a04;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    *(ushort *)(uVar3 * 2 + 0x02000a04) =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
         (ushort)0x00004044;
    *(undefined4 *)(uVar3 * 4 + iVar4 + 8) = 0;
    puVar2 = 0x02000a40;
    (*(undefined2 *)0x02000a40) = (short)0x00003b44;
    puVar2[1] = (short)0x00000c08;
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0800ce24;
    puVar5 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + 0x02000a04);
    FUN_08128be0((*(int *)0x08b2c0bc) + 0x08b2c0c4,(*puVar5 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0((*(int *)0x08b2c0c0) + 0x08b2c0c8,(*puVar5 & 0x1f00) * 8 + 0x06000800,0x200);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0800ce24:
  iVar4 = (*(int *)(param_1 + 0x34) + 0xfffff880) * 0x10;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x800 < iVar4) {
    iVar4 = 0x800;
  }
  sVar1 = (short)((uint)iVar4 >> 8);
  if (iVar4 < 0x401) {
    *(ushort *)(0x02000a40 + 2) = 8U - sVar1 & 0x1f | 0xc00;
  }
  else {
    *(ushort *)(0x02000a40 + 2) = 8U - sVar1 & 0x1f | ((short)(iVar4 >> 9) + 0xc) * 0x100;
  }
  return;
}


