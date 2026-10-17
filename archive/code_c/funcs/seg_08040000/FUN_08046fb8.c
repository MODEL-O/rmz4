// undefined FUN_08046fb8(void)
// entry 0x8046fb8


undefined8 FUN_08046fb8(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 in_lr;
  
  iVar5 = FUN_08005500(*DAT_08047038);
  iVar1 = DAT_0804703c;
  if (iVar5 != 0) {
    *(undefined1 *)(iVar5 + 9) = 0x1b;
    *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar1 + 0x6c);
    *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
    puVar6 = (undefined1 *)(iVar5 + 0x25);
    *puVar6 = 0x10;
    puVar2 = DAT_08047040;
    *(undefined2 *)(iVar5 + 0x20) = *DAT_08047040;
    puVar3 = DAT_08047044;
    *(undefined1 *)(iVar5 + 0x22) = *DAT_08047044;
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar5 + 9) = 0x1b;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar1 + 0x6c);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *puVar6 = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *puVar2;
      uVar4 = *puVar3;
    }
    else {
      *(undefined1 *)(iVar5 + 9) = 0x1b;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar1 + 0x6c);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *puVar6 = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = puVar2[1];
      uVar4 = puVar3[1];
    }
    *(undefined1 *)(iVar5 + 0x22) = uVar4;
    *(int *)(iVar5 + 0x28) = param_1;
    *(undefined1 *)(iVar5 + 0x10) = 0;
    *(undefined1 *)(iVar5 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar5);
}


