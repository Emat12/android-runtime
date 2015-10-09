package com.tns.internal;

import android.util.Log;
import android.content.res.Configuration;

import com.tns.Util;

public class AppBuilderCallbackTestImpl implements AppBuilderCallback
{
	public AppBuilderCallbackTestImpl()
	{
	}

	@Override
	public void onConfigurationChanged(android.content.Context context, Configuration newConfig)
	{
		Log.d(logTag, "::onConfigurationChanged");
	}

	@Override
	public void onCreate(android.content.Context context)
	{
		Log.d(logTag, "::onCreate");
	}

	@Override
	public void onLowMemory(android.content.Context context)
	{
		Log.d(logTag, "::onLowMemory");
	}

	@Override
	public void onTerminate(android.content.Context context)
	{
		Log.d(logTag, "::onTerminate");
	}

	@Override
	public void onTrimMemory(android.content.Context context, int level)
	{
		Log.d(logTag, "::onTrimMemory");
	}
	
	@Override
	public Thread.UncaughtExceptionHandler getDefaultUncaughtExceptionHandler()
	{
		return null;
	}
	
	@Override
	public ExtractPolicy getExtractPolicy()
	{
		return null;
	}
	
	@Override
	public boolean shouldEnableDebugging(android.content.Context context)
	{
		boolean shouldEnableDebugging = Util.isDebuggableApp(context);
		return shouldEnableDebugging;
	}

	private final String logTag = "AppBuilderCallbackTestImpl";
}
