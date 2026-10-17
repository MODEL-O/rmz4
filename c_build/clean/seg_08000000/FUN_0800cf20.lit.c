// undefined FUN_0800cf20(void)
// entry 0x800cf20


void FUN_0800cf20(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 local_20 [2];
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar3 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + 0x02000a04);
    uVar1 = *(uint *)(param_1 + 100) | 0x00008047;
    *puVar3 = (ushort)uVar1;
    local_20[0] = 0;
    FUN_08128be0(local_20,(uVar1 & 0x1f00) * 8 + 0x6000000,0x01000200);
    FUN_08128be0((*(int *)0x08b2c0c4) + 0x08b2c0cc,(*puVar3 & 0x1f00) * 8 + 0x06000800,0x200);
    puVar3 = 0x02000a50;
    (*(ushort *)0x02000a50) = (*(ushort *)0x02000a50) | 0x4000;
    *(undefined1 *)((int)puVar3 + 0xd) = 0xfb;
    puVar3[3] = 0;
    puVar3[5] = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = (*(int *)(0x02000ab0 + 0x0002d030) >> 8) - *(int *)(param_1 + 0x34);
  uVar1 = iVar2 - 0x50;
  if (((int)uVar1 < 0) && (0xffffff00 < (int)uVar1)) {
    ((ushort *)0x02000a50)[3] = ((short)iVar2 + 0xaf) * 0x100 | 0xff;
  }
  else if (uVar1 < 0x100) {
    *(ushort *)(0x02000a50 + 6) = (ushort)uVar1 & 0xff;
  }
  else {
    *(undefined2 *)(0x02000a50 + 6) = 0xff;
  }
  return;
}


