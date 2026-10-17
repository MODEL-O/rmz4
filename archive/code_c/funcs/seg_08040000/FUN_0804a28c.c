// undefined FUN_0804a28c(void)
// entry 0x804a28c


undefined8 FUN_0804a28c(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_0804a314);
  iVar1 = DAT_0804a318;
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 9) = 0x25;
    puVar7 = (undefined4 *)(iVar1 + 0x94);
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)*puVar7;
    *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
    puVar6 = (undefined1 *)(iVar4 + 0x25);
    *puVar6 = 0x10;
    puVar2 = DAT_0804a31c;
    *(undefined2 *)(iVar4 + 0x20) = *DAT_0804a31c;
    puVar3 = DAT_0804a320;
    puVar5 = (undefined1 *)(iVar4 + 0x22);
    *puVar5 = *DAT_0804a320;
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x25;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)*puVar7;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *puVar6 = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *puVar2;
      *puVar5 = *puVar3;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x25;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)*puVar7;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *puVar6 = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = puVar2[1];
      *puVar5 = puVar3[1];
    }
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = param_2;
    *(undefined1 *)(iVar4 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar4);
}


