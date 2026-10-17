// undefined FUN_0800cc20(void)
// entry 0x800cc20


void FUN_0800cc20(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  puVar2 = 0x02000a40;
  iVar1 = 0x02000ab0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    (*(undefined2 *)0x02000a40) = (short)0x00003b44;
    puVar2[1] = (short)0x00000c0a;
    *(undefined1 *)(iVar1 + 0x0002d029) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (0x000003ef < (uint)(*(int *)(param_1 + 0x34) + 0xfffff61f)) {
    if (0x0000016f < (uint)(*(int *)(param_1 + 0x34) + 0xfffff17f)) {
      puVar4 = (undefined4 *)(iVar1 + 0x0002c00c);
      uVar3 = 0x280000;
    }
    else {
      puVar4 = (undefined4 *)(iVar1 + 0x0002c00c);
      uVar3 = 0x37000;
    }
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 0x0002c00c);
    uVar3 = 0x1a000;
  }
  *puVar4 = uVar3;
  *(char *)(iVar1 + 0x0002d029) = *(char *)(iVar1 + 0x0002d029) + '\x01';
  return;
}


