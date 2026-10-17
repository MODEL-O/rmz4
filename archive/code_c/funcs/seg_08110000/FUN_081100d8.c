// undefined FUN_081100d8(void)
// entry 0x81100d8


undefined4 FUN_081100d8(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  puVar2 = DAT_081101b4;
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)((int)DAT_081101b4 + DAT_081101b8) = 0x20;
    *(undefined1 *)((int)puVar2 + DAT_081101bc) = 0x20;
    *(undefined1 *)(puVar2 + 0x200) = 0x20;
    *(undefined4 *)(puVar2 + 0x204) = 0;
    FUN_08002348();
    *DAT_081101c0 = 0;
    puVar3 = DAT_081101c4;
    *DAT_081101c4 = 0;
    *(undefined1 *)(puVar3 + 7) = 0xff;
    *DAT_081101c8 = 0;
    *puVar2 = 0;
    FUN_0810d4a8();
    *DAT_081101cc = (ushort)DAT_081101d0 & *DAT_081101cc & (ushort)DAT_081101d4 | 0x100;
    FUN_080012ec(1);
    iVar4 = DAT_081101d8;
    FUN_081126ac(DAT_081101d8,0xe00);
    *(ushort *)(iVar4 + DAT_081101e0) =
         (ushort)*(byte *)((*(ushort *)(param_1 + 0x12) >> 1 & 3) + DAT_081101dc);
    FUN_080012b8(1,DAT_081101e4);
    *(undefined2 *)(param_1 + 0x24c) = 1;
    iVar4 = DAT_081101e8;
    *(undefined1 *)(param_1 + DAT_081101e8) = 0;
    *(undefined1 *)(param_1 + DAT_081101ec) = 0;
    *(undefined2 *)(param_1 + 0x250) = 0;
    *(ushort *)(param_1 + iVar4 + 4) = *DAT_081101f0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    return in_lr;
  }
  uVar1 = *DAT_081101f0;
  if (((*(ushort *)(param_1 + DAT_081101f4) ^ uVar1) & uVar1 & 0xb) == 0) {
    *(ushort *)(param_1 + DAT_081101f4) = uVar1;
    FUN_08110288(param_1);
  }
  else {
    FUN_08001390(1);
  }
  iVar4 = DAT_0811026c;
  puVar2 = DAT_08110268;
  if (*(char *)(DAT_08110264 + 0x1320) == '\x01') {
    *(undefined1 *)((int)DAT_08110268 + DAT_0811026c) = 0x20;
    iVar5 = DAT_08110270;
    *(undefined1 *)((int)puVar2 + DAT_08110270) = 0x20;
    *(undefined1 *)((int)puVar2 + iVar4 + -2) = 0x20;
    *(undefined4 *)((int)puVar2 + iVar5 + 7) = 0;
    FUN_08002348();
    *DAT_08110274 = 0;
    puVar3 = DAT_08110278;
    *DAT_08110278 = 0;
    *(undefined1 *)(puVar3 + 7) = 0xff;
    *DAT_0811027c = 0;
    *puVar2 = 0;
    FUN_0810d4a8();
    FUN_080029c0();
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    FUN_0810f6f8(DAT_08110280,1);
    FUN_080013b0(DAT_08110284);
  }
  return in_lr;
}


